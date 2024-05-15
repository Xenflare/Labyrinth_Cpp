#include "Enemies.cpp"
#include "Player.cpp"

class Heal {

    public:

        int Healing;

        Heal(int healing) {

            Healing = healing;

        }

        void Trigger(Player& target) {

            if (typeid(target) == typeid(Player)) {

                target.HP += Healing;
                if (target.HP > target.MHP) {

                    target.HP = target.MHP;

                }

            }

        }  

};

class Burn {

    public:

        int Burning;

        Burn(int burning) {

            Burning = burning;

        }

        void Trigger(EnemyInstance& target) {

            if (typeid(target) == typeid(Player) || typeid(target) == typeid(EnemyInstance)) {

                target.BurnDuration += Burning;

            }

        }  

};

class Coagulate {

    public:

        void Trigger(Player& target) {

            if (typeid(target) == typeid(Player)) {

                target.BleedDuration = 0;

            }

        }  

};