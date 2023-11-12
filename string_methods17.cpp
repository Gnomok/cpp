# include <iostream>
# include <cmath>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline (std::cin, name);

    // if (name.length() > 12){
    //     std::cout << "Your name is too long bro";
    // }
    // else {
    //     std::cout << "Welcome " << name;
    // }
    // if (name.empty()){
    //     std::cout << "You dont have a name??";
    // }
    // else{
    //    std::cout << "Welcome " << name;
    // }
    // name.clear();

    // std::cout << "Hello " << name;

    // name.append("@gmail.com");


    // std::cout << "Your gmail is " << name;

    // std::cout << name.at(1);

    // name.insert(0, "@");
    // std::cout << name;

    // std::cout << name.find(' ');

    name.erase(0, 5);

    std::cout << name;


    return 0;
}