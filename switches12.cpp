#include <iostream>
#include <cmath>

int main(){
    // int month;
    // std::cout << "Enter the mounth (1-12): ";
    // std::cin >> month;

    // if(month == 1){
    //     std::cout << "Its january";
    // }
    // else if(month == 2){
    //     std::cout << "Its february";
    // }
    // else if(month == 3){
    //     std::cout << "Its march";
    // }
    // else if(month == 4){
    //     std::cout << "Its april";
    // }
    // else if(month == 5){
    //     std::cout << "Its may";
    // }
    // else if(month == 6){
    //     std::cout << "Its june";
    // }
    // else if(month == 7){
    //     std::cout << "Its july";
    // }
    // else if(month == 8){
    //     std::cout << "Its august";
    // }
    // else if(month == 9){
    //     std::cout << "Its september";
    // }
    // else if(month == 10){
    //     std::cout << "Its october";
    // }
    // else if(month == 10){
    //     std::cout << "Its november";
    // }
    // else if(month == 10){
    //     std::cout << "Its december";
    // }
    // else{
    //     std::cout << "You are idiot bro";
    // }
    // switch(month){
    //     case 1:
    //         std::cout << "Its January";
    //         break;
    //     case 2:
    //         std::cout << "Its february";
    //         break;
    //     case 3:
    //         std::cout << "Its march";
    //         break;
    //     case 4:
    //         std::cout << "Its april";
    //         break;
    //     case 5:
    //         std::cout << "Its may";
    //         break;
    //     case 6:
    //         std::cout << "Its june";
    //         break;
    //     case 7:
    //         std::cout << "Its july";
    //         break;
    //     case 8:
    //         std::cout << "Its august";
    //         break;
    //     case 9:
    //         std::cout << "Its september";
    //         break;
    //     case 10:
    //         std::cout << "Its october";
    //         break;
    //     case 11:
    //         std::cout << "Its november";
    //         break;
    //     case 12:
    //         std::cout << "Its december";
    //         break;
    //     default:
    //     std::cout << "Please enter only numbers (1-12)";
    // }


    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "YOu cool bro";
        break;
    
    case 'B':
        std::cout << "This norm bro";
        break;
    
    case 'C':
        std::cout << "This ok";
        break;
    case 'D':
        std::cout << "This not ok";
        break;
        case 'F':
        std::cout << "You are stupid";
        break;
    default:
        std::cout << "Please only normal grades";
        break;
    }


    return 0;
}