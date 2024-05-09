#include <iostream>
#include <list>
#include <unordered_map>
#include <any>
#include "AbilityClasses.cpp"
using namespace std;

int main() {

    list<string> registeredCharacters;
    unordered_map<string,int> inventory;
    unordered_map<string,unordered_map<string,any>> enemyPresets;
    EnemyType skeleton("Skeleton", "Creatures of bone, held together by the magic of the labyrinth");

    return 0;
}
