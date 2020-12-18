#include <iostream>
#include <fstream>
#include "Character.h"



int main()
{
	//Saving to a text file example
	Character player = Character();
	player.health = 100;
	player.damage = 10;

	//Created instance of file stream.
	std::fstream file;

	//Searched for file with the name given in the first argument.
	//If no file existed it will create one with that name. Then "std::io::out" is used to
	//say that we want to output data to the locla text file.
	file.open("save.txt", std::ios::out);
	file << player.health << std::endl;
	file << player.damage;
	file.close();

	return 0;
}