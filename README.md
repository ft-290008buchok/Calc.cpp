# mathematical-expression-parser   
![logotype](https://user-images.githubusercontent.com/71639489/182538769-16c023e1-1ce2-4cd7-9b36-b8bcfc06b9be.png)

This library is for parsing a string mathematical expression and calculating its value. The expression can contain two variables "x" and "y", signatures of trigonometric functions sin(), cos(), tg(), ctg() are also supported. The library is written in C++, and C++ does not have a built-in module for working with string mathematical expressions, so this library can be very useful in many C++ projects. If you read on, you will see how simple and convenient it is.   

# Example

We want to parse the expression - calling the processing_expr() function to pre-process the expression   

    std::string s = "sin(x+y)-1.239+x*x/y";
    processing_expr(s);
    
Next, set the values of the variables   

    float x = 1; y = 2;
    set_x(x), set_y(y);
    
And calculate the value of the expression given x and y   

    float a = calculate();
    std::cout<<a<<std::endl;
    
Output

    -0.59788
    
Now we can change the values of the variables and calculate the value of the expression with the new values of the variables   

    x = 1.34;
	y = 45.8765;
	set_x(x), set_y(y);
	a = calculate();
	std::cout << a << std::endl;
    
Output   

    -1.29234
    
# Installation
You don't need to install anything, just add the calc.h header file, the calc.cpp implementation file, to your C++ project, connect the header file to where you want to use Calc.cpp   

    #include"calc.h"

and compile the project.
# Where it can be applied

This library allows you to calculate at a very high speed and can be used as a computing engine wherever multiple calculations of the value of an analytically specified mathematical expression are required - various calculators, plotters, and the like.   
You can find an example of using this module in the [math-plotter](https://github.com/ft-290008buchok/Math-Plotter) project.   

# How does it work

Based on the character-by-character analysis of the expression string, a binary expression tree is created, which is converted into an inverse Polish record by method of recursive descent, represented in the machine's memory as an ordinary one-dimensional array (std::vector). The calculation uses a stack calculator algorithm that works with reverse Polish notation.
    
