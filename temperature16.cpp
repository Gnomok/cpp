#include <iostream>
#include <cmath>

int main (){
    double temp;
    char unit;
    std::cout << "***** Temperature conversion ******\n";
    std::cout << "C = Celsius \n";
    std::cout << "F = Farenheit \n";
    std::cout << "What unit whould you like to convert to ";
    std::cin >> unit;

    if (unit == 'f' || unit == 'F'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperatute is: " << temp << "C '\n";
    }
    else if (unit == 'c' || unit == 'C'){
        std::cout << "Enter the temperature in Farenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperatute is: " << temp << "F '\n";
    }
    else{
        std::cout << "Please enter only C or F '\n'";
    }



    std::cout << "***************************************";


    return 0;
}