#include <iostream>

int main(){
    std::string name = "Max is awesome";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Max", "Roma", "Misha"};

    // std::cout << sizeof(gpa) << " bites \n";
    // std::cout << sizeof(name) << " bites \n";
    // std::cout << sizeof(grade) << " bites \n";
    // std::cout << sizeof(student) << " bites \n";
    // std::cout << sizeof(grades) << " bites \n";
    std::cout << sizeof(students) << " bites \n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements \n";
    return 0;
}