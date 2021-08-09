# Step1
## Setup libraries and build folder
```bash
python setup.py
```
python3-dev libraries must be in /usr/include/python3.6, and lib in /usr/lib/x86_64-linux-gnu/libpython3.6m.so.
otherwise, change CMakeLists.txt at lines 17,20 accordingly.

## Alternatively do it yourself

# Step1-alternative
## Clone pybind11
```bash
git clone https://github.com/pybind/pybind11.git
```

## Make build folder
```bash
mkdir build
```


# Step2
## cd to build foldler
```bash
cd build
```

## Build
```bash
cmake .. && make
```

## Run the executable
```bash
cd ../
./main
```


