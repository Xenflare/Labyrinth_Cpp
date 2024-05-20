#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
#include <any>
#include "AbilityClasses.cpp"
#include "Items.cpp"
using namespace std;

struct itempair {

	Item item;
	int amount;

};

class StarterCharacter {

	public:

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

string input(string prompt) {

	string returnValue;

	cout << prompt;
	cin >> returnValue;

	return to_string(returnValue);

}

string lower(string convert) {

	string finalString;
	map<char, int> uppercase;
	uppercase['A'] = 1;
	uppercase['B'] = 2;
	uppercase['C'] = 3;
	uppercase['D'] = 4;
	uppercase['E'] = 5;
	uppercase['F'] = 6;
	uppercase['G'] = 7;
	uppercase['H'] = 8;
	uppercase['I'] = 9;
	uppercase['J'] = 10;
	uppercase['K'] = 11;
	uppercase['L'] = 12;
	uppercase['M'] = 13;
	uppercase['N'] = 14;
	uppercase['O'] = 15;
	uppercase['P'] = 16;
	uppercase['Q'] = 17;
	uppercase['R'] = 18;
	uppercase['S'] = 19;
	uppercase['T'] = 20;
	uppercase['U'] = 21;
	uppercase['V'] = 22;
	uppercase['W'] = 23;
	uppercase['X'] = 24;
	uppercase['Y'] = 25;
	uppercase['Z'] = 26;

	char lowercase[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

	for (int i = 0; i < convert.length(); i++) {

		if (uppercase.find(convert[i]) != uppercase.end()) {

			finalString += lowercase[uppercase[convert[i]] - 1];
			
		} else {

			finalString += convert[i];
			
		}
		
	}

	return finalString;
	
}

itempair makeItemPair(Item pItem, int pAmount) {

	itempair ItemPair;
	ItemPair.item = pItem;
	ItemPair.amount = pAmount;
	
	return ItemPair;

}

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

    list<StarterCharacter> registeredCharacters;
    unordered_map<string,StoredItem> inventory;
    unordered_map<string,unordered_map<string,any>> enemyPresets;
    EnemyType skeleton("Skeleton", "Creatures of bone, held together by the magic of the labyrinth");

    return 0;
}
