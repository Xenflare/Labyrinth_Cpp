#include <iostream>
#include <list>
#include <unordered_map>
#include <any>
#include "AbilityClasses.cpp"
using namespace std;

struct itempair {

	Item item;
	int amount;

}

class StarterCharacter {

	public: // Things that are commented out won't work without the Item class and will be changed after I add it

		string Name;
		string Description;
		itempair DefaultItems[];

		StarterCharacter(string name, string description, itempair startingItemPairs[]) {

			Name = name;
			Description = description;
			DefaultItems = startingItemPairs;

			registeredCharacters.push_back(this);

		}
	
};

string coloredString(string txt, string color, int format) { // This uses the ANSI escape code 8bit colors

	unordered_map<string, int> colorPairs;
	colorPairs["yellow"] = 226;
	colorPairs["orange"] = 208;
	colorPairs["blue"] = 21;
	colorPairs["cyan"] = 51;
	colorPairs["red"] = 196;
	colorPairs["darkred"] = 124;
	colorPairs["green"] = 46;
	colorPairs["purple"] = 128;
	colorPairs["pink"] = 213;
	colorPairs["white"] = 15;
	
	string entryText = "\033[";
	entryText += to_string(format);
	entryText += ";38;5;" + to_string(colorPairs[color]);
	entryText += "m";
	return entryText + txt + "\033[0m";
	
}

int main() {

    list<auto> registeredCharacters;
    unordered_map<string,int> inventory;
    unordered_map<string,unordered_map<string,any>> enemyPresets;
    EnemyType skeleton("Skeleton", "Creatures of bone, held together by the magic of the labyrinth");

    return 0;
}
