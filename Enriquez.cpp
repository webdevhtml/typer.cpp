#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

void playGame();

int main() {
    cout << "Welcome to Typer Enriquez!" << endl;
    cout << "Press mo na bro..." << endl;
    _getch();

    playGame();

    cout << "Game Over!" << endl;

    return 0;
}

void playGame() {
    srand(time(0));

    const int wordCount = 5;
    const string words[wordCount] = {"bro", "hina", "lapu", "siya", "ikaw"};

    int score = 0;
    int lives = 3;

    while (lives > 0) {
        system("cls");

        int randomIndex = rand() % wordCount;
        string currentWord = words[randomIndex];

        cout << "score: " << score << endl;
        cout << "lives: " << lives << endl;
        cout << "Type mo bro: " << currentWord << endl;

        string userInput;
        cin >> userInput;

        if (userInput == currentWord) {
            score += currentWord.length();
            cout << "Nice G! Score + " << currentWord.length() << endl;
        } else {
            lives--;
            cout << "Report! Lives - 1" << endl;
        }

        cout << "Press any key to continue..." << endl;
        _getch();
    }
}
 
 