#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWInner(char player, char computer);


int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWInner(player, computer);

    return 0;
}


char getUserChoice(){   
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do{
        
         std::cout << "CHOOSE ONE OF THE FOLOWING\n";
        std::cout << "*************************\n"; 
        std::cout << "'r' for rock\n"; 
        std::cout << "'p' for paper\n"; 
        std::cout << "'s' for scissors\n"; 
        std::cin >> player; 
    }while(player != 'r' && player != 'p' && player != 's');
    
    

    return player;
}
char getComputerChoice(){
    srand (time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';    
    case 2:
        return 'p'; 
    case 3:
        return 's'; 
    default:
        break;
    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout << "ROCK\n";
            break;
        case 'p':
            std::cout << "PAPER\n";
            break;
        case 's':
            std::cout << "SCISSORS\n";
            break;


    }
}
void chooseWInner(char player, char computer){
    
    switch (player)
    {
    case 'r':
        if(computer == 'r'){
            std::cout << "Its a tie!\n";
        }
        else if (computer == 'p'){
            std::cout << "YOU LOSE!\n";
        }
        else {
            std::cout << "YOU WIN!\n";
        }
        break;
    case 'p':
        if(computer == 'p'){
            std::cout << "Its a tie!\n";
        }
        else if (computer == 's'){
            std::cout << "YOU LOSE!\n";
        }
        else {
            std::cout << "YOU WIN!\n";
        }
        break;
    case 's':
        if(computer == 's'){
            std::cout << "Its a tie!\n";
        }
        else if (computer == 'r'){
            std::cout << "YOU LOSE!\n";
        }
        else {
            std::cout << "YOU WIN!\n";
        }
        break;
    

    }
    
}