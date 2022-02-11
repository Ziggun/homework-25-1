#include "Coordinate.h"

void coordinate:: input() {
	std::cout << "Input coordinate" << std::endl;
	std::cin >> x;
	std::cin >> y;
}

void coordinate::output() {
	std::cout << "X = " << x << " Y = " << y;
}

bool coordinate::compare(coordinate* a) {
	if (x == a->x && y == a->y)
		return true;
	return false;
}
