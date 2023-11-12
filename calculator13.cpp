#include <iostream>
#include <cmath>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***********CALCULATOR***********"<< '\n';

    std::cout << "Enter eithrt (+ - * /)";
    std::cin >> op;

    std::cout << "Enter the firs numer: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;



    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result: " << result << '\n';
        break;
    default:
        std::cout << "You are stupid bro" << '\n';
        break;
    }

    std::cout << "*********************************"<< '\n';



    return 0;
}