#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string userChoice;
    string computerChoice;
    string choices[3] = {"rock", "paper", "scissors"};

    srand(time(0));

    cout << "Choose rock, paper, or scissors: ";
    cin >> userChoice;

    int randomIndex = rand() % 3;
    computerChoice = choices[randomIndex];

    cout << "You chose: " << userChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a draw!" << endl;
    } else if (
        (userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "scissors" && computerChoice == "paper") ||
        (userChoice == "paper" && computerChoice == "rock")
    ) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;

}

