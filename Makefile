SRC=main_python.cpp
EXEC=main_python
make:$(SRC)
	sudo apt-get install python3-dev
	g++ -std=c++11 -Wall -I/usr/include/python3.6 -I./pybind11/include/ -L./pybind11 $(SRC) -o $(EXEC) `pkg-config --cflags --libs python3`

