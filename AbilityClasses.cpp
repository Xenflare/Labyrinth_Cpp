#include "RandomNumber.h"
#include "Enemies.cpp"
#include "Player.cpp"

class Attack {
    public:
        string Name;
        int DMG[2];
        int BleedChance;
        int BleedDuration;
        int RequiredEnergy;
        bool Global;

        Attack(string name, int baseDamage[2], int bleedChance, int bleedDuration, int energyUse, bool isGlobal) {
            Name = name;
            DMG[2] = baseDamage[2];
            BleedChance = bleedChance;
            BleedDuration = bleedDuration;
            RequiredEnergy = energyUse;
            Global = isGlobal;
        }

        void Trigger(EnemyInstance& target, Attack&) {
            int damageToDeal = RandomNumber(DMG[0],DMG[1]);

            if (typeid(target) == typeid(EnemyInstance)) {

                target.Health -= damageToDeal;

            } else if (typeid(target) == typeid(Player)) {

                target.HP -= damageToDeal;

            }

            if (RandomNumber(1,100) <= BleedChance) {
                    
                target.BleedDuration += BleedDuration;

            }

        }



};