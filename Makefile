all: client server

client: client.o protocol.pb.o protocol.grpc.pb.o
	g++ -o client client.o protocol.pb.o protocol.grpc.pb.o `pkg-config --libs protobuf grpc++`

client.o: client.cpp
	g++ -c client.cpp protocol.pb.cc protocol.grpc.pb.cc

server: server.o protocol.pb.o protocol.grpc.pb.o dblogic.o db.o
	g++ -o server server.o protocol.pb.o protocol.grpc.pb.o dblogic.o db.o `pkg-config --libs protobuf grpc++` -l sqlite3

server.o: server.cpp
	g++ -c server.cpp protocol.pb.cc protocol.grpc.pb.cc dblogic.cpp

dblogic.o: dblogic.cpp
	g++ -c dblogic.cpp db.cpp

db.o: db.cpp
	g++ -c db.cpp

protocol.pb.o: protocol.pb.cc
	g++ -c protocol.pb.cc

protocol.grpc.pb.o: protocol.grpc.pb.cc
	g++ -c protocol.grpc.pb.cc

clean:
	rm -rf *.o client server
