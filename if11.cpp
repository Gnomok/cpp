#include <iostream>

int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "Die already ";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to pornhub";
    }
    else if (age < 0)
    {
        std::cout << "You are stupid? ";
    }
    
    else{
        std::cout << "go out of here ";
    }
    

    return 0;
}