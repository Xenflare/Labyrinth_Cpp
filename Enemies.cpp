#include <iostream>
#include <string>
#include <any>
#include <unordered_map>
using namespace std;

class EnemyType {
    public:
        string Name;
        string Explanation;

        EnemyType(string name, string description) {
            Name = name;
            Explanation = description;
        };
};

class EnemyInstance {
    public:
        int Health;
        int MaxHealth;
        string Type;
        any DropLoot;
        string Name;

        int BleedDuration = 0;
        int BurnDuration = 0;
        int BattleEnergy = 0;
        unordered_map<string, int> Inventory;

        EnemyInstance( string name, string type, int maxHealth, any lootTable) {
            Health = maxHealth;
            MaxHealth = maxHealth;
            Type = type;
            DropLoot = lootTable;
            Name = name;
    };




};