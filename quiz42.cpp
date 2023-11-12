#include <iostream>

int main(){


    std::string queistions [] = {"1.What year was c++ created?:",
                                "2.Who invented c++",
                                "3.What is the predecessor of c++?",
                                "4.Is the Earth flat?"};
    std::string options [][4] = {{"A. 1969", "B.1975", "C.1985", "D.1989"},
                                {"A.Guido van Rossum", "B.Bjarne Stroustrup", "C.John Carmack", "D.Mark Zuckerburg"},
                                {"A.C", "B.C+", "C.C--", "D.B++"},
                                {"A.yes", "B.no", "C.sometimes", "D.what's earth"}} ;
    char answearKey[] = {'C', 'B', 'A', 'B' };
    int size = sizeof(queistions)/sizeof(queistions[0]);    
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "*************************"<< '\n';
        std::cout << queistions[i] << '\n';
        std::cout << "*************************"<< '\n';
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){

            std::cout << options[i][j] << '\n';

        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answearKey[i]){
            std::cout << "YOU ARE RIGHT!" << '\n';
            score++;
        }
        else{
            std::cout << "YOU ARE WRONG!" << '\n';
            std::cout << "ANSWEAR: " <<answearKey[i] << '\n';
        }
    }
    std::cout << "YOUR SCORE: " << score;
    


    return 0;
}