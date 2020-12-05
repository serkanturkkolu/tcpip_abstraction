INCLUDE_PATH=-I./
ARCHIVE_FILE=libtcpip.a
SERVER_EXAMPLE=server.out
CLIENT_EXAMPLE=client.out
g++ -std=c++11 ./src/*.cpp $INCLUDE_PATH -c && ar cr libtcpip.a *.o && rm *.o
g++ -std=c++11 ./server/*.cpp $INCLUDE_PATH $ARCHIVE_FILE -o $SERVER_EXAMPLE
g++ -std=c++11 ./client/*.cpp $INCLUDE_PATH $ARCHIVE_FILE -o $CLIENT_EXAMPLE
