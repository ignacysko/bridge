#pragma once
#include<string>
#include"Implementation.h"

/**
* Each Concrete Implementation corresponds to a specific platform and
* implements the Implementation interface using that platform's API.
*/
class ConcreteImplementationA : public Implementation {
public:
	std::string OperationImplementation() const override {
		return "ConcreteImplementationA: Here's the result on the platform A.\n";
	}
};
class ConcreteImplementationB : public Implementation {
public:
	std::string OperationImplementation() const override {
		return "ConcreteImplementationB: Here's the result on the platform B.\n";
	}
};