#include <iostream>

int main(){

    int num;

    // std::cout << "Enter a posistive #: ";
    // std::cin >> num;

    // while (num < 0)
    // {
    //     std::cout << "Enter a posistive #: ";
    //     std::cin >> num;
    // }

    
    do{
        std::cout << "Enter a posistive #: ";
        std::cin >> num;
    }while (num < 0);
    
    std::cout << "This is: " << num;


    return 0;
}