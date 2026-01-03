#include<iostream>
#include<cstdlib>
#include<ctime>

char UserChoice(){

// char player;
std :: cout << "********Rock-Paper-Scissors Game********" << '\n';
std :: cout << "****************************************" << '\n';
char player;

do{
   std :: cout << "Choose from the following: " << '\n';
   std :: cout << "'R' stands for Rock" << '\n';
   std :: cout << "'P' stands for Paper" << '\n';
   std :: cout << "'S' stands for Scissors" << '\n';
   std :: cin >> player;
} while(player != 'R' && player != 'P' && player != 'S');

  return player;
}
char ComputerChoice(){
    char computer = '0'; 

    std :: srand(std :: time(0));
    int num = std ::rand() % 3 + 1;

    switch(num){
        case 1: computer = 'R';
                break;
        case 2: computer = 'P';
                break;
        case 3: computer = 'S';
                break;
    }
    return computer;
}
void showChoice(char choice){
   switch(choice){
    case 'R': std :: cout << "Rock" << '\n';
            break;
    case 'P': std :: cout << "Paper" << '\n';
            break;
    case 'S': std :: cout << "Scissors" << '\n';
            break;
   }
}
void showWinner(char player, char computer){
     switch(player){
        case 'R' : {
            if(computer == 'R'){
                std :: cout << "It's a tie!";
                }
                else if(computer == 'P'){
                    std :: cout << "You lost!";
                }
                else{
                    std :: cout << "You won!";
                }
                break;
        }

        case 'P' : {
            if(computer == 'R'){
                std :: cout << "You won!";
                }
                else if(computer == 'P'){
                    std :: cout << "It's a tie!";
                }
                else{
                    std :: cout << "You lost!";
                }
                break; 
        }

        case 'S' : {
            if(computer == 'R'){
                std :: cout << "You lost!";
                }
                else if(computer == 'P'){
                    std :: cout << "You won!";
                }
                else{
                    std :: cout << "It's a tie!";
                }
                break;
        }
             }
}
int main(){

    char player;
    char computer;
     
    player = UserChoice();
    std :: cout << "Your choice is: ";
    showChoice(player);

    computer = ComputerChoice();
    std :: cout << "Computer's choice is: ";
    showChoice(computer);

    showWinner(player, computer);

    return 0;
}
