#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "*************** NUMBER GUESSING GAME ***************\n";
    do{
        std::cout << "Enter a guess (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "TOO HIGH \n";
        }
        else if(guess < num){
            std::cout << "TOO LOW \n";
        }
        else if(guess == num){
            break;
        }

    }while (guess != num);

    std::cout << "YOU WIN!!!!! \n";
    std::cout << "TRIES: " << tries << '\n' ;
    std::cout << "******************************************************\n";
    




    return 0;
}