#include <iostream>

int main(){



    int rows;
    int colums;
    char symbol;

    std::cout << "How manu rows?: ";
    std::cin >> rows;

    std::cout << "How manu colums?: ";
    std::cin >> colums;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;



    for(int i = 1; i <= rows; i++){
        
         for(int j = 1; j <=colums; j++){
             std::cout << symbol ;
         }
         std::cout << '\n';
     }
    //  for(int i = 1; i <= 3; i++){
        
    //      for(int j = 1; j <=10; j++){
    //          std::cout << j << " ";
    //      }
    //      std::cout << '\n';
    //  }
    return 0;
}