// game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "reGameCharacter.h"
void printWinner(GameCharacter a, GameCharacter b) {
    double aPower = a.g_strength() * a.gspeed();
    double bPower = b.g_strength() * b.gspeed();
    if (aPower > bPower) {
        std::cout << a.gname() << " won!\n";
        return;
    }
    if (aPower < bPower) {
        std::cout << b.gname() << " won!\n";
        return;
    }
    std::cout << "It's a tie!\n";
}
GameCharacter winner(GameCharacter a, GameCharacter b) {
    double aPower = a.g_strength() * a.gspeed();
    double bPower = b.g_strength() * b.gspeed();
    if (aPower > bPower) {

        return a;
    }
    if (aPower < bPower) {

        return b;
    }
    return b;
}
int main() {
	GameCharacter peach("peach", "yellow", 50, 4.5);
	GameCharacter sonic("sonic", "blue", 50, 4.2);
    std::string userName;
    std::string userColor;
    int userStr;
    double userSp;
    std::cout << "Enter your name: ";
    std::cin >> userName;
    std::cout << "\nEnter a color: ";
    std::cin >> userColor;
    std::cout << "\nEnter a strenth level: ";
    std::cin >> userStr;
    std::cout << "\nEnter a speed: ";
    std::cin >> userSp;
    while(userStr >= 80) {
        userStr /= 2;
    }
    while(userSp >= 10) {
        userSp /= 2;
    }
	GameCharacter me(userName, userColor, userStr, userSp);
	std::cout << "Welcome, new character: " << me.gname() << std::endl;
	printWinner(peach, sonic);
	printWinner(me, winner(peach, sonic));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
