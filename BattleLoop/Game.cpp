#include <iostream>
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
	m_player = new Character(100, 20);
	m_wizard = new Character(100, 10);
}

void Game::update()
{
	int action = ' ';
	std::cout << "What would you like to do Player?" << std::endl;
	std::cout << "Press 1 to attack." << std::endl;
	std::cout << "Press 2 to dodge." << std::endl;

	std::cin >> action;

	if (action == 1)
	{
		m_player->attack(m_wizard);
		std::cout << "Player does " << m_player->getDamage() << " damage to Wizard." << std::endl;
		system("pause");
	}
	else if (action == 2)
	{
		m_wizard->attack(m_player);
		std::cout << "You try to dodge but still got hit by the wizard" << std::endl;	
		std::cout << "Player took " << m_wizard->getDamage() << " damage." << std::endl;
		system("pause");
	}

	if (action == 1)
	{
		std::cout << "Wizard attacks and does " << m_wizard->getDamage() << " damage to Player." << std::endl;
		m_wizard->attack(m_player);
		system("pause");
	}
	else if (action == 2)
	{
		std::cout << "While you are still down, the Wizard attacks again.\nWizard attacks and does  " << m_wizard->getDamage() << " damage to Player." << std::endl;
		m_wizard->attack(m_player);
		system("pause");
	}
}

void Game::draw()
{
	system("cls");

	std::cout << "Wizard health: " << m_wizard->getHealth() << std::endl;

	std::cout << "Player health: " << m_player->getHealth() << std::endl;
}

void Game::end()
{
	if (m_player->getIsAlive() == true)
	{
		system("cls");
		std::cout << "Player wins!" << std::endl;
		system("pause");
	}
	else
	{
		system("cls");
		std::cout << "The wizard has won....." << std::endl;
		system("pause");
	}
	delete m_player;
	delete m_wizard;
}