# mathematical-expression-parser

This library is for parsing a string mathematical expression and calculating its value. The expression can contain two variables "x" and "y", signatures of trigonometric functions sin(), cos(), tg(), ctg() are also supported.   

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
    
# Where it can be applied

This library allows you to calculate at a very high speed and can be used as a computing engine wherever multiple calculations of the value of an analytically specified mathematical expression are required - various calculators, plotters, and the like.   
You can find an example of using this module in the [math-plotter](https://github.com/ft-290008buchok/Math-Plotter) project.
    
