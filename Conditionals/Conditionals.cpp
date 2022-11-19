// Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//simple applicaitonto qualify a customer for a loan
	int age;
	int bBalance;
	string crbStatus;
	int period;
	string name;

	cout << "Please enter your name:";
	cin >> name;
	cout << "Enter your age:";
	cin >> age;
	if (age >22)
	{
		cout << "What is your bank balance:";
		cin >> bBalance;
		if (bBalance > 50000)
		{
			cout << "Enter your CRB status:";
			cin >> crbStatus;
			if (crbStatus == "good")
			{
				cout << "How long have you been with us:";
				cin >> period;
				if (period > 6)
				{
					cout << "You qualify for a loan" << name;
				}
				else {
					cout << "You don't qualify for the loan," << name;
				}
			}
			else {
				cout << "You don't qualify for the loan," << name;
			}
		}
		else {
			cout << "You don't qualify for the loan," << name;
		}
	
	}
	else {
		cout << "You don't qualify for the loan," << name;
	}
}
