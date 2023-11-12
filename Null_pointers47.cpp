#include <iostream>

int main(){

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assaigend \n";
    }
    else{
        std::cout << "address was assaigend \n";
        std::cout << *pointer;
    }



    return 0;
}