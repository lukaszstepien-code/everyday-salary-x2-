#include <iostream>

int main()
{
	using namespace std;

	unsigned int numberOfDays;
	string repeating;

	do
	{
		long double todaysSalary{ 0.01 };
		long double sumOfTheSalary{ 0.01 };
		do
		{
			cout << "How many days you want? ";
			cin >> numberOfDays;
		} while (numberOfDays < 1);

		for (int i = 1; i < numberOfDays; i++)
		{
			cout << todaysSalary << endl;
			todaysSalary *= 2;
			sumOfTheSalary += todaysSalary;
		}
		cout << todaysSalary << endl;

		cout << "Sum of the salary for " << numberOfDays << " days: " << sumOfTheSalary << "$\n";
		cout << "Do you want repeat? (Y/N) ";
		cin >> repeating;
	} while (repeating == "Y" || repeating == "y");
	return 0;
}