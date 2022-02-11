#include "Function.h"

void	scalpel(coordinate* a, coordinate* b) {
	std::cout << "Input points" << std::endl;
	a->input();
	b->input();
	std::cout << "incision : ";
	a->output();
	std::cout << " ";
	b->output();
	std::cout << std::endl;
}

void hemostat() {
	coordinate a;
	std::cout << "Input points" << std::endl;
	a.input();
	std::cout << "hemostat : ";
	a.output();
	std::cout << std::endl;
}

void tweezers() {
	coordinate a;
	std::cout << "Input points" << std::endl;
	a.input();
	std::cout << "tweezers : ";
	a.output();
	std::cout << std::endl;
}

bool suture(coordinate* a, coordinate* b) {
	coordinate c, d;
	std::cout << "Input points" << std::endl;
	c.input();
	d.input();
	if (a->compare(&c) && b->compare(&d)) {
		std::cout << "End operation" << std::endl;
		return true;
	}
	else {
		std::cout << "Bad suture" << std::endl;
		return false;
	}

}