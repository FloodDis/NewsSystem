#include "FrequentlyUsed.h"

int EnterNumber(string message)
{
	cout << message;
	int value;
	char input;
	cin >> input;
	bool isString = false;
	while (cin >> input)
	{
		if (isdigit(input) || input == '-')
		{
			cin.unget();
			cin >> value;
			return value;
		}
		else
		{
			cout << "Wrong value!\n";
		}
	}
}