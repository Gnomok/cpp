#include <iostream>
#include <cmath>

int main(){

    int temperature;
    bool sunny = true;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    // if (temperature > 0 && temperature < 30){
    //     std::cout << "Temperature is good";
    // }
    // else{
    //     std::cout << "Temperature is bad";
    // }

    if (temperature <= 0 || temperature > 30){
        std::cout << "Temperature is bad\n";
    }
    else{
        std::cout << "Temperature is good\n";
    }
    if (!sunny)
    {
        std::cout << "Its cloudy outside";
    }
    else{
        std::cout << "Its sunny outside";
    }
    
    
    return 0;
}
