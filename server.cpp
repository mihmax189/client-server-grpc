#include <grpcpp/grpcpp.h>
#include <string>
#include <vector>
#include <array>

#include <iostream>
using std::endl;
using std::cout;

#include "protocol.grpc.pb.h"
#include "dblogic.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using protocol::Commands;
using protocol::DatabaseService;
using protocol::Request;
using protocol::Responce;

// Server Implementation
class DatabaseServiceImplementation final : public DatabaseService::Service {
public:
  DatabaseServiceImplementation() {
    db = new DbLogic("workers.db");
  }

  ~DatabaseServiceImplementation() {
    delete db;
  }

  Status sendRequest(ServerContext* context,
		     const Request* request,
                     Responce* responce) override {

    Commands command = request->command();

    std::array<std::string, 4> args;
    args[0] = request->arguments(0);
    args[1] = request->arguments(1);
    args[2] = request->arguments(2);
    args[3] = request->arguments(3);

    std::string res = "OK";

    switch(command) {
      case Commands::ADD_WORKER:
        if (!db->insertWorker(args[0], args[1], args[2], args[3]))
          res = "Not Ok";
        break;

      case Commands::SHOW_WORKERS:
        if (!db->showWorkers(res))
         res = "Not Ok";
        break;

      case Commands::SHOW_POST:
       if (!db->showPost(std::stoi(args[0]), res))
        res = "Not Ok";
       break;

      case Commands::SHOW_HEAD:
       if (!db->showHead(std::stoi(args[0]), res))
        res = "Not Ok";
       break;

     case Commands::SET_POST:
       if (!db->updatePost(std::stoi(args[0]), args[1]))
        res = "Not Ok";
       break;

     case Commands::SET_HEAD:
       if (!db->updateHead(std::stoi(args[0]), args[1]))
        res = "Not Ok";
       break;

     case Commands::DEL_WORKER:
       if (!db->deleteWorker(std::stoi(args[0])))
        res = "Not Ok";
       break;
    }

    responce->set_result(res);

    return Status::OK;
  }

private:
  DbLogic *db;
};


void RunServer() {
  std::string server_address("0.0.0.0:50051");
  DatabaseServiceImplementation service;

  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which
  // communication with client takes place
  builder.RegisterService(&service);

  // Assembling the server
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on port: " << server_address << std::endl;

  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();
  return 0;
}

