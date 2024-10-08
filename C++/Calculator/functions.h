#include <iostream>
#include <string>

long double hypotenuse_cal(long double, long double);
long double leg_cal(long double, long double);

template <typename T>
T calculate(T num1, T num2, T num3, std::string operation)
{
    if (operation == "+")
    {
        return num1 + num2;
    }
    else if (operation == "-")
    {
        return num1 - num2;
    }
    else if (operation == "x")
    {
        return num1 * num2;
    }
    else if (operation == "/")
    {
        if (num1 == 0 || num2 == 0) {
            std::cout << "Error: Cannot divide by zero." << std::endl;
            return false;
        } else {
            return num1 / num2;
        }
    }
    else if (operation == "%")
    {
        return static_cast<int>(num1) % static_cast<int>(num2);
    }
    else if (operation == "^")
    {
        return pow(num1, num2);
    }
    else if (operation == "hypotenuse")
    {
        return hypotenuse_cal(num1, num2);
    }
    else if (operation == "leg")
    {
        return leg_cal(num1, num2);
    }
    else if (operation == "a(rect)")
    {
        return num1 * num2;
    }
    else if (operation == "a(circle)")
    {
        return std::numbers::pi * num1 * num1;
    }
    else if (operation == "c(circle)")
    {
        return 2 * std::numbers::pi * num1;
    }
    else if (operation == "a(tri)")
    {
        return 0.5 * num1 * num2;
    }
    else if (operation == "v(cube)")
    {
        return pow(num1, 3);
    }
    else if (operation == "v(cuboid)")
    {
        return num1 * num2 * num3;
    }
    else if (operation == "v(tri prism)")
    {
        return 0.5 * num1 * num2 * num3;
    }
    else if (operation == "tsa(cuboid)")
    {
        return 2 * (num1 * num2 + num1 * num3 + num2 * num3);
    }
    else if (operation == "tsa(cube)")
    {
        return 6 * pow(num1, 2);
    }
    else if (operation == "v(cylinder)")
    {
        return pow(num1, 2) * std::numbers::pi * num2;
    }
    else
    {
        std::cout << "Invalid operation" << std::endl;
        return 1;
    }
}