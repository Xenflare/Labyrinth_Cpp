#include <iostream>

using namespace std;

class Player {
    public:

        string Name;
        string Class;
        int HP;
        int MHP;

        int BattleEnergy = 0;
        int Kills = 0;
        int BleedDuration = 0;
        int BurnDuration = 0;
        int Armor = 0;

        Player (string name, string pClass, int maxHealth) {
            Name = name;
            Class = pClass;
            HP = maxHealth;
            MHP = maxHealth;

        }
};