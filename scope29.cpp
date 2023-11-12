#include <iostream>


int myNum =3;

void printNum();

int main(){

    int myNum = 1;
    
    //std::cout << myNum;
    printNum();


    return 0;
}

void printNum(){
    std::cout << myNum;
}