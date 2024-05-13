#include "RandomNumber.h"
#include "Enemies.cpp"
#include "Player.cpp"

class SwingAttack {
    public:
        string Name;
        int DMG[2];
        int BleedChance;
        int BleedDuration;
        int RequiredEnergy;
        bool Global = false;

        SwingAttack(string name, int baseDamage[2], int bleedChance, int bleedDuration, int energyUse) {
            Name = name;
            DMG[2] = baseDamage[2];
            BleedChance = bleedChance;
            BleedDuration = bleedDuration;
            RequiredEnergy = energyUse;
        }

         void Trigger(EnemyInstance& target, SwingAttack&) {
            int damageToDeal = RandomNumber(DMG[0],DMG[1]);

            if (typeid(target) == typeid(EnemyInstance)) {
                target.Health -= damageToDeal;

                if (RandomNumber(1,100) <= BleedChance) {
                    target.BleedDuration += BleedDuration;

                }

            } else if (typeid(target) == typeid(Player)) {
                target.HP

        }



};