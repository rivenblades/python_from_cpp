#Step1
#Setup libraries and build folder
python setup.py

#Alternatively do it yourself

#Step1-alternative
#Clone pybind11
git clone https://github.com/pybind/pybind11.git

#Make build folder
mkdir build
cd build



#Step2
#cd to build foldler
cd build

#Build
cmake .. && make

#Run the executable
cd ../
./main

