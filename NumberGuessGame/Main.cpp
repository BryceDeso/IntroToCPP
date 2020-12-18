#include <iostream>

int main()
{

	int min = 0;
	int max = 20;
	char answer = ' ';
	int wrongcounter = 0;

	std::cout << "Please think of a number from " << min << "-" << max << ".";

	//Will try to guess the user's number.
	while (min <= max)
	{
		int guess = (min + max) / 2;

		std::cout << "\nIs this your number:" << guess << std::endl;
		std::cout << "\nPut 1 for yes and 2 for no." << std::endl;

		std::cout << "Answer: ";
		std::cin >> answer;

		if (answer == '1')
		{
			std::cout << "\nYAY! I guessed your number! \nPress enter to exit." << std::endl;
			return 0;
		}
		else if (answer == '2')
		{
			//the wrongcounter is used by increminting 1 by the counter every time 
			//the comupter makes a wrong guess. After five tries the computer will know the user is 
			//cheating and boot them out of the program since it will always only take a maximum of 
			//five tries to narrow down the users number.
			wrongcounter++;

			std::cout << "wrongcounter: ";
			std::cout << wrongcounter << std::endl;

			if (wrongcounter == 4)
			{
				if (guess == 0)
				{
					std::cout << "HEY STOP CHEATING! GET OUTTA HERE!" << std::endl;
					return 0;
				}
				if (guess == 11)
				{
					std::cout << "HEY STOP CHEATING! GET OUTTA HERE!" << std::endl;
					return 0;
				}
			}
			if (wrongcounter == 5)
			{
				std::cout << "HEY STOP CHEATING! GET OUTTA HERE!" << std::endl;
				return 0;
			}

			std::cout << "\nDang, was your number higher or lower?" << std::endl;
			std::cout << "Put 1 if your number is higher than my guess" << std::endl;
			std::cout << "Put 2 if your number is lower than my guess" << std::endl;

			std::cout << "Answer: ";
			std::cin >> answer;

			if (answer == '1')
			{
				min = guess + 1;
			}
			else if (answer == '2')
			{
				max = guess - 1;
			}
		}
	}
	system("pause");
	return 1;
}