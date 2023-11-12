#include <iostream>

int main(){

    std::string students[] = {"Max", "Roma", "Misha"};

    // for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
    //     std::cout << students[i] << '\n';
    // }

    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}