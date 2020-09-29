# tcpip_abstraction
Tcp for linux , macOS and windows .

You can use CMake for build(linux and macOS). You can use visual studio project file (sln file) for msvc(Visual Studio).
It tested with <b>macOS</b>(CMake) , <b>linux</b>(CMake) ,<b>windows(msvc)</b>(visual studio project) and <b>mingw</b>(g++ command as below) yet.
For <b>mingw</b> compilation:
<b>g++ -std=c++11 main.cpp src/tcpip.cpp -o program.exe -lws2_32</b> 
