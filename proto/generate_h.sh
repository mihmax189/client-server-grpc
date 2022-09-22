protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` protocol.proto
protoc --cpp_out=. protocol.proto
