#include <iostream>
#include <fstream>
#include "Game.h"

void Game::run()
{
	start();

	while (m_player->getIsAlive() && m_wizard->getIsAlive())
	{
		draw();

		update();
	}

	end();
}

void Game::start()
{
	int i = 0;
	std::fstream file;
	m_player = new Character();
	m_wizard = new Character();

	//Asks player if they would like to reload a saved game or start a new game.
	std::cout << "Would you like to load save data?" << std::endl;
	std::cout << "Press 1 to load last save." << std::endl;
	std::cout << "Press 2 to start new game." << std::endl;

	std::cin >> i;

	//Will load player and wizard stats from last saved game.
	if (i == 1)
	{
		file.open("save.txt", std::ios::in, std::ios::binary);

		if (!file.is_open())
		{
			std::cout << "File not found" << std::endl;
			std::cout << "New game will start" << std::endl;
			system("pause");
			return;
		}
		else
		{
			file >> m_player->health;
			file >> m_player->damage;

			file >> m_wizard->health;
			file >> m_wizard->damage;
		}
		file.close();
	}
}

void Game::update()
{
	std::fstream file;
	int action = ' ';

	//Gives player the option to Attack, Dodge, or save game.
	std::cout << "What would you like to do Player?" << std::endl;
	std::cout << "Press 1 to attack." << std::endl;
	std::cout << "Press 2 to dodge." << std::endl;
	std::cout << "Press 3 to save progress." << std::endl;

	std::cin >> action;

	//Player attacks wizard and gets hit for 10 damage.
	if (action == 1)
	{
		m_player->attack(m_wizard);
		std::cout << "Player does " << m_player->getDamage() << " damage to Wizard." << std::endl;
		system("pause");
	}
	//Player fails to dodge and still gets hit for 10 damage.
	else if (action == 2)
	{
		m_wizard->attack(m_player);
		std::cout << "You try to dodge but still got hit by the wizard" << std::endl;	
		std::cout << "Player took " << m_wizard->getDamage() << " damage." << std::endl;
		system("pause");
	}
	//Saves the player and wizards stats at the moment of save.
	else if (action == 3)
	{
		file.open("save.txt", std::ios::app , std::ios::binary);

		if (!file.is_open())
		{
			std::cout << "Save file not found" << std::endl;
			return;
		}
		else
		{
			file << m_player->health << std::endl;
			file << m_player->damage << std::endl;

			file << m_wizard->health << std::endl;
			file << m_wizard->damage << std::endl;
		}
		file.close();	
	}

	//Displays that the player is hit and took 10 damage
	if (action == 1)
	{
		std::cout << "Wizard attacks and does " << m_wizard->getDamage() << " damage to Player." << std::endl;
		m_wizard->attack(m_player);
		system("pause");
	}
	//Displays that the player failed to dodge and got hit again.
	else if (action == 2)
	{
		std::cout << "While you are still down, the Wizard attacks again.\nWizard attacks and does  " << m_wizard->getDamage() << " damage to Player." << std::endl;
		m_wizard->attack(m_player);
		system("pause");
	}
	//Displays that the game has saved.
	if (action == 3)
	{
		std::cout << "Save complete!" << std::endl;
		system("pause");
	}
}

//Draws player and wizards health and damage stats.
void Game::draw()
{
	system("cls");

	std::cout << "Wizard health: " << m_wizard->getHealth() << std::endl;

	std::cout << "Player health: " << m_player->getHealth() << std::endl;
}

void Game::end()
{
	//Displays text if player health is above 0.
	if (m_player->getIsAlive() == true)
	{
		system("cls");
		std::cout << "Player wins!" << std::endl;
		system("pause");
	}
	//Displays if player health is below 0.
	else
	{
		system("cls");
		std::cout << "The wizard has won....." << std::endl;
		system("pause");
	}

	delete m_player;
	delete m_wizard;
}