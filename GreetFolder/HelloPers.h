#pragma once
#include <iostream>

class Greeter {
protected:
	std::string name;
public:
	void greet(std::string name);
};