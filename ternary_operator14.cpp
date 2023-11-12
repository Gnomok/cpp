#include <iostream>
#include <cmath>

int main(){
    int grade = 75;

    // if (grade >= 60){
    //     std::cout <<"You pass!";
    // }
    // else{
    //     std::cout << "You fall!";
    // }

    //    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fall!";
    // int number = 8;
    // number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;

    // hungry  ? std::cout << "You are hungry " :  std::cout << "You are not hungry ";
    std::cout << (hungry ? "You are hungry" : "You are not hungry");


    return 0;
}