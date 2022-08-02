#include<iostream>
#include"calc.h"
#include<string>

int main()
{
	float x = 1, y = 2;

	std::string s = "x+2-sin(-cos(x-y*y))/x";
	processing_expr(s);
	set_x(x); set_y(y);
	float a = calculate();
	std::cout << a << std::endl;

	s = "sin(x+y)-1.239+x*x/y";
	processing_expr(s);
	set_x(x), set_y(y);
	a = calculate();
	std::cout << a << std::endl;
	
	x = 1.34;
	y = 45.8765;
	set_x(x), set_y(y);
	a = calculate();
	std::cout << a << std::endl;

	return 0;
}