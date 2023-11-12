#include <iostream>

int main(){

    std::string foods[100];

    fill(foods, foods + 50, "pizza");

    fill(foods + 50, foods + 100, "hot-dog");

    for(std::string food: foods){
        std::cout << food << '\n';
    }

    return 0;
}