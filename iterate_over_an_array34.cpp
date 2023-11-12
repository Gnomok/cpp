#include <iostream>

int main(){

    //std::string students[] = {"Max", "Roma", "Misha"};
    char grades[] = {'a', 'b', 'c', 'd', 'f'};
    // std::cout << students[0] << '\n';
    // std::cout << students[1]<< '\n';
    // std::cout << students[2]<< '\n';

    for (int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }


    return 0;
}