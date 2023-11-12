#include <iostream>


void happyBirthday(std::string name, int age);



int main(){

    std::string name = "Max";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}



void happyBirthday(std::string name, int age){
    std::cout << "HAPPY BIRTHAY TO " << name << '\n' ;
    std::cout << "HAPPY BIRTHAY TO " << name << '\n' ;
    std::cout << "HAPPY BIRTHAY TO " << name << '\n' ;
    std::cout << "YOU ARE " << age << '\n' ;
}