#include<string>
#include<iostream>
#include"Abstraction.h"
#include"ConcreteImplementation.h"
#include"ExtendedAbstraction.h"
#include"Implementation.h"

/**
* Except for the initialization phase, where an Abstraction object gets linked
* with a specific Implementation object, the client code should only depend on
* the Abstraction class. This way the client code can support any abstraction-
* implementation combination.
*/
void ClientCode(const Abstraction& abstraction) {
	// ...
	std::cout << abstraction.Operation();
	// ...
}
/**
* The client code should be able to work with any pre-configured abstraction-
* implementation combination.
*/

int main() {
	//nowy
	Implementation* implementation = new ConcreteImplementationA;
	Abstraction* abstraction = new Abstraction(implementation);
	ClientCode(*abstraction);
	std::cout << std::endl;
	delete implementation;
	delete abstraction;

	implementation = new ConcreteImplementationB;
	abstraction = new ExtendedAbstraction(implementation);
	ClientCode(*abstraction);

	delete implementation;
	delete abstraction;

	system("pause");
	return 0;
}