#include <iostream>

double F2C(double fahrenheit)
{
    double celsius;

    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    return celsius;
}

int main()
{
    double fahrenheit;

    std::cout << "Enter temperature in fahrenheit";
    std::cin >> fahrenheit;
    std::cout << "Temperature in Celsius = "
        << F2C(fahrenheit) << std::endl;
}