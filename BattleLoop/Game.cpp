#include <iostream>
#include "Game.h"

void Game::run()
{
	start();

	while (!getGameOver())
	{
		update();

		draw();
	}

	end();
}

void Game::start()
{
	m_player1 = Character(10, 10);
	m_player2 = Character(10, 5);
}

void Game::update()
{
	m_player1.attack(m_player2);
}

void Game::draw()
{
	std::cout << "player2's health is " << m_player2.getHealth() << std::endl;
}

void Game::end()
{

}

