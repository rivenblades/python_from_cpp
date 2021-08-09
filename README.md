#cd to cmake-version
cd cmake-version

#Clone pybind11
git clone https://github.com/pybind/pybind11.git

#Make build folder
mkdir build
cd build

#Build
cmake .. && make

#Run the executable
cd ../
./main

