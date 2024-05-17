#include "Enemies.cpp"
#include "Player.cpp"

class Effect {

    public:

        int Healing;
        int Burning;
        bool stopsBleeding;

        Effect(int healing, int burning, bool coagulates) {

            Healing = healing;
            Burning = burning;
            stopsBleeding = coagulates;

        }

        void Trigger(Player& target) {

            if (typeid(target) == typeid(Player)) {

                target.HP += Healing;
                if (target.HP > target.MHP) {

                    target.HP = target.MHP;

                }

            } else if (typeid(target) == typeid(EnemyInstance)) {

                target.Health += Healing;
                if (target.Health > target.MaxHealth) {

                    target.Health = target.MaxHealth;

                }

            }
            if (coagulates) {

                target.BleedDuration = 0

            }
            target.BurnDuration += Burning;

        }  

};