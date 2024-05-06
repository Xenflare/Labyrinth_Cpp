#include <iostream>
#include <list>
#include <unordered_map>
#include <any>
#include "Enemies.cpp"
#include "AbilityClasses.cpp"
using namespace std;

int main() {

    list<string> registeredCharacters;
    unordered_map<string,int> inventory;
    unordered_map<string,unordered_map<string,any>> enemyPresets;
    EnemyType skeleton("Skeleton", "Creatures of bone, held together by the magic of the labyrinth");
    cout << skeleton.Name << endl << skeleton.Explanation << endl;
    EnemyInstance one("HellRsd30041"
                      "RRrro", "dsf", 1,1);
    SwingAttack as("Hello", [&],1,1,1);
    cout << car.DMG << endl;
    car.Trigger("Me");
    return 0;
}
