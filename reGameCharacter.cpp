#include "reGameCharacter.h"
#include <iostream>
GameCharacter::GameCharacter(std::string n, std::string hairC, int str, double s) {
    name = n;
    hairColor = hairC;
    strength = str;
    speed = s;
};
std::string GameCharacter::gname() {
    return name;
}
std::string GameCharacter::ghairColor() {
    return hairColor;
}
int GameCharacter::g_strength() {
    return strength;
}
double GameCharacter::gspeed() {
    return speed;
}