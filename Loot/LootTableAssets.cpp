#include "Items.cpp"

struct lootpair {

    Item item;
    int weight;
    int amount[2];

};

struct loottable {

    int Rolls[2];
    int BonusRolls[2];
    lootpair Entries[];

};