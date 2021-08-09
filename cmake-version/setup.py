import os

commands=[
        'mkdir build',
        'git clone https://github.com/pybind/pybind11.git',
        ]
for cmd in commands:
    os.system(cmd)
