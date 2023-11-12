#include <iostream>

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
                            {"Covrette", "Equniox", "Silverado"},
                            {"Chalanger", "Durango", "Rqm 1500"}};
    
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int colums = sizeof(cars)/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums; j++){
            std::cout << cars[i][j] << " "; 
        }
        std::cout << '\n';
    }

    // std::cout << cars[0][0]<< " ";
    // std::cout << cars[0][1]<< " ";
    // std::cout << cars[0][2]<< '\n';
    // std::cout << cars[1][0]<< " ";
    // std::cout << cars[1][1]<< " ";
    // std::cout << cars[1][2]<< '\n';
    // std::cout << cars[2][0]<< " ";
    // std::cout << cars[2][1]<< " ";
    // std::cout << cars[2][2]<< '\n';

    return 0;
}