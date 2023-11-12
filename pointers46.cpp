#include <iostream>

int main(){

    std::string name = "Maksym";
    int age = 17;
    std::string freePizzas[5] = {"piiza1", "piiza2", "piiza3", "piiza4", "piiza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;



    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << freePizzas << '\n';


    return 0;
}