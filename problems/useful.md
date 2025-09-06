mac: g++ -std=c++17 -O2 -Wall X.cpp -o ../../bin/.X && ../bin/X
powershell:  g++ -std=c++17 -O2 -Wall X.cpp -o ..\..\bin\X.exe; ..\..\bin\X.exe

with errors: g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -O2 X.cpp -o ../../bin/X && ../../bin/X