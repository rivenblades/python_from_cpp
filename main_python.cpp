#include <iostream>
#include <pybind11/pybind11.h>
#include <pybind11/embed.h>
namespace py = pybind11;
int main(){
	py::scoped_interpreter python;
	auto math=py::module::import("math");
	double root_two=math.attr("sqrt")(2.0).cast<double>();
	std::cout << "The square root of 2 calculated in PYTHON is:"<<root_two<<"\n";
	auto my_module=py::module::import("my_module");
	auto res = my_module.attr("add")(2,3).cast<int>();
	std::cout << "Adding 2+3 from PYTHON MODULE my_module.py equals:" <<res<<"\n";
return 0;}
