#include <iostream>

int main(){

    std::string name = "Maks";
    int age = 17;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}