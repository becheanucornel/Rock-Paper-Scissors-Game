#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player,computer);
}

char getUserChoice()
{
    char player;
    bool correctInput = true;

    std::cout << "Rock-Paper-Scissors Game!\n";

    do {
        correctInput = true;
        std::cout << "Choose one of the following: \n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
        if(player != 'r' && player != 'p' && player != 's')
        {
            std::cout << "Incorrect Input! Try again!\n";
            correctInput = false;
        }
    }while(correctInput==false);

    return player;

}
char getComputerChoice()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
}
void showChoice(char choice)
{
    switch (choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
        default:
            std::cout << "Invalid input!";
            break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player) {
        case 'r':
            if(computer == 'r')
            {
                std::cout << "It's a tie!\n";
            }
            if(computer == 'p')
            {
                std::cout << "Computer won!\n";
            }
            if(computer == 's')
            {
                std::cout << "User won!\n";
            }
            break;
        case 'p':
            if(computer == 'r')
            {
                std::cout << "Computer won!\n";
            }
            if(computer == 'p')
            {
                std::cout << "It's a tie!\n";
            }
            if(computer == 's')
            {
                std::cout << "User won!\n";
            }
            break;
        case 's':
            if(computer == 'r')
            {
                std::cout << "User won!\n";
            }
            if(computer == 'p')
            {
                std::cout << "Computer won!\n";
            }
            if(computer == 's')
            {
                std::cout << "It's a tie!\n";
            }
            break;
        default:
            std::cout << "An error has occurred! Please try again!\n";
    }
}