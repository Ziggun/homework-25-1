#include "Function.h"

int main (){
	coordinate a, b;
	std::string str;
	bool test = false;
	std::cout << "Operation has began" << std::endl;

	scalpel(&a, &b);

	while (!test) {
		std::cout << "Input com" << std::endl;
		std::cin >> str;

		if (str == "hemostat") {
			hemostat();
		}
		else if (str == "tweezers") {
			tweezers();
		}
		else if (str == "suture") {
			test = suture(&a, &b);
		}
	}
	return 0;
}