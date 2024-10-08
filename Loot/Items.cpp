#include "AbilityClasses.cpp"
#include "UseEvents.cpp"

struct weaponstats {

	bool isWeapon;
	Attack attacks[];

};

struct consumablestats {

	bool isConsumable;
	Effect effects[];

};

class Item {

    public:

        string Name;
        string Description;
        string SaleDescription;
        int Value;
        int MaxAmount;
        string Category;
        bool IsWeapon;
        bool IsConsumable;
		weaponstats Abilities;
		consumablestats Effects;

        Item(string name, string description, string shopDescription, int price, int limit, string category, weaponstats weaponValues, consumablestats consumableValues) {

            Name = name;
            Description = description;
            SaleDescription = shopDescription;
            Value = price;
            MaxAmount = limit;
            IsWeapon = weaponstats.isWeapon;
            IsConsumable = consumablestats.isConsumable;
			// Weapon and consumable stats will temporarily be very restrictive and only use SwingAttack() and Heal()
			if (IsWeapon) {

				Abilities = weaponValues;

			}

			if (IsConsumable) {

				Effects = consumableValues;

			}

        }

};

class StoredItem {

	public:

		Item Stored;
		int Amount;

		StoredItem(Item item, int amount) {

			Stored = item;
			Amount = amount;

		}

};