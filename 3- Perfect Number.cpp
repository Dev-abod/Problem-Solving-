#include <string>
#include <iostream>
#include <math.h>
using namespace std;




int ReadNumberPositive(string Massage)
{
	int Number;
	do
	{
		cout << Massage << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

bool PrintPerfect(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Sum == Number;

	
}

void PrintResult(int Number)
{
	if (PrintPerfect(Number))
		cout << Number << " is Perfect Number\n";
	else
		cout << Number << " Is Not Perfect Number\n";
}




int main()
{
	PrintResult(ReadNumberPositive("enter numbern"));


	
}
