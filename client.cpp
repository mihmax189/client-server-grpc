#include <grpcpp/grpcpp.h>
#include <string>
#include <array>

#include "protocol.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using protocol::Commands;
using protocol::DatabaseService;
using protocol::Request;
using protocol::Responce;

class Client {
 public:
  Client(std::shared_ptr<Channel> channel)
      : stub_(DatabaseService::NewStub(channel)) {}

  // Assembles client payload, sends it to the server, and returns its response
  std::string sendRequest(const Commands c, std::array<std::string, 4> &a) {
    // Data to be sent to server
    Request request;
    request.set_command(c);

    request.add_arguments(a[0]);
    request.add_arguments(a[1]);
    request.add_arguments(a[2]);
    request.add_arguments(a[3]);
    //request.set_arguments(0, a[0]);
    //request.set_arguments(1, a[1]);
    //request.set_arguments(2, a[2]);
    //request.set_arguments(3, a[3]);

    // Container for server response
    Responce responce;

    // Context can be used to send meta data to server or modify RPC behaviour
    ClientContext context;

    // Actual Remote Procedure Call
    Status status = stub_->sendRequest(&context, request, &responce);

    // Returns results based on RPC status
    if (status.ok()) {
      return responce.result();
    } else {
      std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
      return "RPC Failed";
    }
  }

 private:
  std::unique_ptr<DatabaseService::Stub> stub_;
};

void RunClient() {
  std::string target_address("0.0.0.0:50051");
  // Instantiates the client
  Client client(
      // Channel from which RPCs are made - endpoint is the target_address
      grpc::CreateChannel(target_address,
                          // Indicate when channel is not authenticated
                          grpc::InsecureChannelCredentials()));

  std::string response;
  int c;
  std::array<std::string, 4> a;

  std::string msg = "Enter command: 0-add worker; 1-show worker; 2-show post; 3-show head; 4-set post; 5-set head; 6-del worker";
  std::cout << msg << std::endl;

  while (std::cin >> c) {
    switch((Commands)c) {
      case Commands::ADD_WORKER:
        std::cout << "values: fname sname post headname [ex: Bob Smith engineer James_Cobs]: ";
        std::cin >> a[0] >> a[1] >> a[2] >> a[3];
        break;

      case Commands::SHOW_WORKERS:
        break;

      case Commands::SHOW_POST:
        std::cout << "values: id: ";
        std::cin >> a[0];
        break;

      case Commands::SHOW_HEAD:
        std::cout << "values: id: ";
        std::cin >> a[0];
        break;

      case Commands::SET_POST:
        std::cout << "values: id post: ";
        std::cin >> a[0] >> a[1];
        break;

      case Commands::SET_HEAD:
        std::cout << "values: id head [ex: 'James_Cob']: ";
        std::cin >> a[0] >> a[1];
        break;

      case Commands::DEL_WORKER:
        std::cout << "values: id: ";
        std::cin >> a[0];
        break;
    }
    // RPC is created and response is stored
    response = client.sendRequest((Commands)c,a);

    // Prints results
    std::cout << "Responce:\n" <<  response << std::endl;
  }
}

int main(int argc, char* argv[]) {
  RunClient();

  return 0;
}
