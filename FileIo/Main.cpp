#include <iostream>
#include <fstream>
#include "Character.h"



//int main()
//{
//	//Saving to a text file example
//	Character player = Character();
//	player.health = 100;
//	player.damage = 20;
//
//	//Created instance of file stream.
//	std::fstream file;
//
//	//Searched for file with the name given in the first argument.
//	//If no file existed it will create one with that name. Then "std::io::out" is used to
//	//say that we want to output data to the locla text file.
//	file.open("PlayerSaveData/save.txt", std::ios::out);
//
//	//Checks to make sure the file is open, if not it will return 1 to the console window.
//	if (!file.is_open())
//	{
//		return 1;
//	}
//	else
//	{
//		file << player.health << std::endl;
//		file << player.damage;
//	}
//
//	//Closes the text file.
//	file.close();
//
//
//	//Example of loading from a text file.
//
//	//Created new instance of a Character to load data to.
//	Character player2 = Character();
//
//	//Searched for file with the name given in the first argument.
//	//Then "std::io::in" is used to say that we want to load data out of the local text file.
//	file.open("PlayerSaveData/save.txt", std::ios::in);
//
//
//	if (!file.is_open())
//	{
//		return 2;
//	}
//	else
//	{
//		//Reads player stats
//		file >> player2.health;
//		file >> player2.damage;
//	}
//
//	//Closes the text file.
//	file.close();
//
//	//Printed the stats saved to the text file to make sure it loaded to player2.
//	std::cout << player2.health << std::endl;
//	std::cout << player2.damage << std::endl;
//
//	return 0;
//}

bool binaryFileExample()
{
	Character sbeve = Character();
	sbeve.health = 100;
	sbeve.damage = 10;
	Character sbeve2 = Character();
	sbeve2.health = 110;
	sbeve2.damage = 20;
	Character sbeve3 = Character();
	sbeve3.health = 120;
	sbeve.damage = 30;

	std::fstream file;
	file.open("save.txt", std::ios::out | std::ios::binary);
	
	if (!file.is_open())
	{
		return false;
	}

	file.write((char*)&sbeve, sizeof(Character));
	file.close();

	Character sbeve4 = Character();
	file.open("save.txt", std::ios::in | std::ios::binary);

	if (!file.is_open())
	{
		return false;
	}

	file.read((char*)&sbeve4, sizeof(Character));
	std::cout << sbeve4.health << std::endl;
	std::cout << sbeve4.damage << std::endl;
	file.close();
}

int main()
{
	binaryFileExample();

	return 0;
}
