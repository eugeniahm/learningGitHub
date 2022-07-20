#include <iostream>
#include <string>  
#include <vector>  
#include <sstream>

std::string getValueFromUser()
{
    std::cout << "Enter a number: ";
    std::string input{};
    std::cin >> input;
    return input;
}

int main()
{
    std::cout << "Welcome to my attempt at making a calculator in C++!\n\n";
    std::string a = { getValueFromUser() };
    std::string b = { getValueFromUser() };
    double x{};
    double y{};

    if (a.find('/') != std::string::npos)
        std::cout << "\nI'm sorry. The calculator can't understand that. Please try again.\n";
    else
        x = std::stod(a);
    if (b.find('/') != std::string::npos)
        std::cout << "\nI'm sorry. The calculator can't understand that. Please try again.\n";
    else
        y = std::stod(b);

    std::cout << "Select an equation between +, -, *, /, and ^: ";
    char equation{};
    std::cin >> equation;

    if (equation == '+')
        std::cout << "\n" << x << " + " << y << " = " << x + y << "\n";
    else if (equation == '-')
        std::cout << "\n" << x << " - " << y << " = " << x - y << "\n";
    else if (equation == '*')
        std::cout << "\n" << x << " * " << y << " = " << x * y << "\n";
    else if (equation == '/')
        std::cout << "\n" << x << " / " << y << " = " << x / y << "\n";
    else if (equation == '^')
        std::cout << "\n" << x << " ^ " << y << " = " << pow(x, y) << "\n";
    else
        std::cout << "\nI'm sorry. The calculator can't understand that. Please try again.\n";

    return 0;
}