#include <iostream>

int main()
{	std::cout << "Task number: ";
	short TaskNum;
	std::cin >> TaskNum;
	switch (TaskNum)
	{
		case 1: {std::cout << "enter lenth: ";
				int lenOfLine;
				std::cin >> lenOfLine;
				float product = 1.0;
				float mn = 0.0;
				int numbInLine = 0;
				int counter = 0;
				for (int i = 0; i < lenOfLine; i++)
				{
					counter++;
					float numb;
					std::cin >> numb;
					if((numb < 0.0) && ((int)numb != 0))
					{
						product *= numb;
						if (numb < mn)
						{
							mn = numb;
							numbInLine = counter;
						}
					
					}
				}
				std::cout << "product: " << product << std::endl;
				std::cout << "minimum: " << mn << std::endl;
				std::cout << "number of minimum: " << numbInLine << std::endl;
				break;}
		case 2: {
			std::cout << "enter N: ";
			int N;
			std::cin >> N;
			short minDigit = 9;
			while(N > 9)
				{
					if((N % 10) < minDigit)
						{minDigit = N % 10;}
					else
					{
						N /= 10;
					}
				} 
				std::cout << minDigit << std::endl;
			break;}
	}
	return 0;
}