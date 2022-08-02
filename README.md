# mathematical-expression-parser

This library is for parsing a string mathematical expression and calculating its value. The expression can contain two variables "x" and "y",   
signatures of trigonometric functions sin(), cos(), tg(), ctg() are also supported.   

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
    

    
