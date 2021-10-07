#include <iostream>
#include <math.h>

int main()
{
    double d = -123.456;
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Hello there, " << d << " - the value for abs is " << std::abs(d) << " and for pow(d, 3) is " << pow(d, 3) << ", and finally sqrt(abs(d)) being " << sqrt(abs(d)) << std::endl;

    return 0;
}
