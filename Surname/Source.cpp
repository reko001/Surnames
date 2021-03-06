#include <iostream>
#include <string>

int main()
{
	std::cout << "How many surnames are you going to insert?" << std::endl;
	int n; //number of surnames
	std::cin >> n;
	std::cout << "Strings or C-like char* arrays? Choose 0 or 1" << std::endl;
	bool ifString;
	std::cin >> ifString;
	if (ifString)
	{
		std::string* arrayS = new std::string[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> *(arrayS + i);
		}
		for (int i = 0; i < n; i++)
		{
			std::cout << *(arrayS + i) << std::endl;
		}
		delete[] arrayS;
	}
	else
	{

	}
}