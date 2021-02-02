#include <string>
#include <iostream>
#ifndef GC_H
#define GC_H
class GameCharacter {
    std::string name;
    std::string hairColor;
    int strength;
    double speed;
public:
    GameCharacter(std::string name, std::string hairColor, int strength, double speed);
    std::string gname();
    std::string ghairColor();
    int g_strength();
    double gspeed();
    void printWinner(GameCharacter a, GameCharacter b);
    GameCharacter winner(GameCharacter a, GameCharacter b);
};
#endif