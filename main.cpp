#include <iostream>
#include <math.h>

int main()
{
    double d = -123.456;
    float f = 1/(float)d;
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Hello there, " << d << " - the value for abs is " << std::abs(d) << " and for pow(d, 3) is " << pow(d, 3) << ", and finally sqrt(abs(d)) being " << sqrt(abs(d)) << std::endl;
    std::cout << "Similarly with a float (1/d) " << f << " - the abs value is " << std::abs(f) << " and for pow(f, 3) is " << pow(f, 3) << std::endl;
    return 0;
}
