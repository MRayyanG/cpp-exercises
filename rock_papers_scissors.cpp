#include <iostream>
#include <random>
#include <ctime>

short computerGuess();
short playerGuess();
void winningTerminal(short, short);



int main(){

    srand(time(0));

    short x;  // 1.rock
    short y; // 2. papers
             // 3. scissor
    do{x =playerGuess();

    y = computerGuess();
    }while( x == y);

    winningTerminal(x, y);

    return 0;
}

short computerGuess(){

    short computerChoice = (rand() % 3) + 1;

    return computerChoice;
}

short playerGuess(){

    short playerChoice;

    do{
    std::cout << "1. Rock\n";
    std::cout << "2. Papers\n";
    std::cout << "3. Scissors\n";
    std::cout << "Enter your choice: ";

    std::cin >> playerChoice;
    if(playerChoice < 1 || playerChoice > 3){
        std::cout << "Enter number 1 to 3\n";
    }
    }while(playerChoice < 1 || playerChoice > 3);

    return playerChoice;
}

void winningTerminal(short p, short c){
    // p for player , c for computer

    if(c == 1) std::cout << "The computer chose rock\n";
    else if(c == 2) std::cout << "The computer chose paper\n";
    else if(c == 3) std::cout << "The computer chose scissors\n";

    if(p == 1){  // p rock, 
        
        if(c == 2) std::cout << "You lose"; // c, paper
        else if(c == 3) std::cout << "You win";  // c, scissor
    }
    
    else if(p == 2){ // p paper, 

        if(c == 1) std::cout << "You win"; // c, rock
        else if(c == 3) std::cout << "You lose"; // c, scissor
    }

    else if(p == 3){ // p scissor,

        if(c == 1) std::cout << "You lose"; // c, rock
        else if(c == 2) std::cout << "You win"; // c, paper
    }
    
}