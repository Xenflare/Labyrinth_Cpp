#include "Random Function.cpp"
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

         void Trigger(string target) {
            int damageToDeal = Random(DMG[0],DMG[1]);
            cout << damageToDeal;

        }



};