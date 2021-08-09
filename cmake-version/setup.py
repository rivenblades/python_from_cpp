import os

commands=[
        'mkdir build',
        'git clone https://github.com/pybind/pybind11.git',
        'sudo apt-get install python3.6-dev'
        ]
for cmd in commands:
    os.system(cmd)
