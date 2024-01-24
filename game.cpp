#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max) : maxNumber(max), numOfGuesses(0) {
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    cout << "Pelin maksimiarvo on: " << maxNumber << endl;
}

Game::~Game() {
    cout << "game objekti tuhottu." << endl;
}

void Game::play() {
    cout << "Arvaa luku 1-" << maxNumber << endl;

    while (true) {
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess > randomNumber) {
            cout << "Pienempi. Arvaa uudestaan." << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Suurempi. Arvaa uudestaan." << endl;
        } else {
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult() const {
    cout << "Arvasit oikein " << numOfGuesses << " kerralla." << endl;
}
