#include <iostream>
#include <string>
#pragma once

struct coordinate
{
	double x;
	double y;

	void input();
	void output();
	bool compare(coordinate* a);
};