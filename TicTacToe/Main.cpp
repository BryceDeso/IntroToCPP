#include <iostream>

int main()
{
	int i = 0;
	bool gameOver = false;
	bool player1Win = false;
	bool player2Win = false;
	bool draw = false;
	char grid[3][3] = { {'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'} };

	char player1[60];

	std::cout << "Player1, what is your name?" << std::endl;

	std::cin >> player1;

	char player2[60];

	std::cout << "Player2, what is your name?" << std::endl;

	std::cin >> player2;

	system("cls");
	std::cout << (char)grid[0][0] << "|" << (char)grid[0][1] << "|" << (char)grid[0][2] << std::endl;
	std::cout << (char)grid[1][0] << "|" << (char)grid[1][1] << "|" << (char)grid[1][2] << std::endl;
	std::cout << (char)grid[2][0] << "|" << (char)grid[2][1] << "|" << (char)grid[2][2] << std::endl;

	while (gameOver == false)
	{
		if (gameOver == false)
		{
			char player1selec = ' ';
			char X = 'X';
			std::cout << player1 << "'s turn, use the number pad to select a space to put a 'X' token on." << std::endl;

			std::cin >> player1selec;

			if (player1selec == '7')
			{
				grid[0][0] = X;
			}
			else if (player1selec == '8')
			{
				grid[0][1] = X;
			}
			else if (player1selec == '9')
			{
				grid[0][2] = X;
			}
			else if (player1selec == '4')
			{
				grid[1][0] = X;
			}
			else if (player1selec == '5')
			{
				grid[1][1] = X;
			}
			else if (player1selec == '6')
			{
				grid[1][2] = X;
			}
			else if (player1selec == '1')
			{
				grid[2][0] = X;
			}
			else if (player1selec == '2')
			{
				grid[2][1] = X;
			}
			else if (player1selec == '3')
			{
				grid[2][2] = X;
			}

			//Checks the first row for three X's
			if (grid[0][0] == 'X')
			{
				if (grid[0][1] == 'X')
				{
					if (grid[0][2] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the second row for three X's
			if (grid[1][0] == 'X')
			{
				if (grid[1][1] == 'X')
				{
					if (grid[1][2] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the third row for three X's
			if (grid[2][0] == 'X')
			{
				if (grid[2][1] == 'X')
				{
					if (grid[2][2] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the first column for three X's
			if (grid[0][0] == 'X')
			{
				if (grid[1][0] == 'X')
				{
					if (grid[2][0] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the second column for three X's
			if (grid[0][1] == 'X')
			{
				if (grid[1][1] == 'X')
				{
					if (grid[2][1] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the third column for three X's
			if (grid[0][2] == 'X')
			{
				if (grid[1][2] == 'X')
				{
					if (grid[2][2] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks from the top left space diagnally to the bottom right space for three X's
			if (grid[0][0] == 'X')
			{
				if (grid[1][1] == 'X')
				{
					if (grid[2][2] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
			//Checks from the top right space diagnally to the bottom left space for three X's
			if (grid[0][2] == 'X')
			{
				if (grid[1][1] == 'X')
				{
					if (grid[2][0] == 'X')
					{
						player1Win = true;
						gameOver = true;
					}
				}
			}
		}

		system("cls");

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;

		i++;

		if (i == 5)
		{
			gameOver = true;
			draw = true;
		}

		if (gameOver == false)
		{
			char player2selec = ' ';
			char O = 'O';
			std::cout << player2 << "'s turn, use the number pad to select a space to put a 'O' token on." << std::endl;

			std::cin >> player2selec;

			if (player2selec == '7')
			{
				grid[0][0] = O;
			}
			else if (player2selec == '8')
			{
				grid[0][1] = O;
			}
			else if (player2selec == '9')
			{
				grid[0][2] = O;
			}
			else if (player2selec == '4')
			{
				grid[1][0] = O;
			}
			else if (player2selec == '5')
			{
				grid[1][1] = O;
			}
			else if (player2selec == '6')
			{
				grid[1][2] = O;
			}
			else if (player2selec == '1')
			{
				grid[2][0] = O;
			}
			else if (player2selec == '2')
			{
				grid[2][1] = O;
			}
			else if (player2selec == '3')
			{
				grid[2][2] = O;
			}

			//Checks the first row for three O's
			if (grid[0][0] == 'O')
			{
				if (grid[0][1] == 'O')
				{
					if (grid[0][2] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the second row for three O's
			if (grid[1][0] == 'O')
			{
				if (grid[1][1] == 'O')
				{
					if (grid[1][2] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the third row for three O's
			if (grid[2][0] == 'O')
			{
				if (grid[2][1] == 'O')
				{
					if (grid[2][2] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the first column for three O's
			if (grid[0][0] == 'O')
			{
				if (grid[1][0] == 'O')
				{
					if (grid[2][0] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the second column for three O's
			if (grid[0][1] == 'O')
			{
				if (grid[1][1] == 'O')
				{
					if (grid[2][1] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks the third column for three O's
			if (grid[0][2] == 'O')
			{
				if (grid[1][2] == 'O')
				{
					if (grid[2][2] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks from the top left space diagnally to the bottom right space for three O's
			if (grid[0][0] == 'O')
			{
				if (grid[1][1] == 'O')
				{
					if (grid[2][2] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
			//Checks from the top right space diagnally to the bottom left space for three O's
			if (grid[0][2] == 'O')
			{
				if (grid[1][1] == 'O')
				{
					if (grid[2][0] == 'O')
					{
						player2Win = true;
						gameOver = true;
					}
				}
			}
		}

		system("cls");

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;
	}

	if (draw == true)
	{
		system("cls");

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;

		std::cout << "DRAW!" << std::endl;
	}
	else if (player1Win == true)
	{
		system("cls");

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;

		std::cout << player1 << " wins!" << std::endl;

	}
	else if (player2Win == true)
	{
		system("cls");

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;

		std::cout << player2 << " wins!" << std::endl;
	}
}

