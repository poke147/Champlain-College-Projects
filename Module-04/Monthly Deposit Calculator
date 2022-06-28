/*Author: Zachary Brady

Class : CSI-140-01/02
	
Assignment : Module 04-Lab-1

Date Assigned : 09/18/2019

Due Date : 09/24/2019 @ 11:59pm

Description :
	This program is intended to provided the user with a monthly depoit amount in order to hit their overall money goal given total amount needed, interest rate, and time in months.

Certification of Authenticity :
	I certify that this is entirely my own work, except where I have given
	fully - documented references to the work of others.I understand the
	definitionand consequences of plagiarismand acknowledge that the assessor
	of this assignment may, for the purpose of assessing this assignment :
	-Reproduce this assignmentand provide a copy to another member of
	academic staff;and /or
	-Communicate a copy of this assignment to a plagiarism checking
	service(which may then retain a copy of this assignment on its
	database for the purpose of future plagiarism checking) */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	//Variable Declaration

	double amount;
	double interest;
	int duration;

	//User Input For Eample 1

	cout << "example 1:" << endl;
	cout << setprecision(2) << fixed;
	cout << setw(40) << right << "Enter Amount Needed: $";
	cin >> amount;
	cout << setw(39) << right << "Enter Interest Rate: ";
	cin >> interest;
	cout << setw(39) << right << "Enter Duration (in months): ";
	cin >> duration;

	//Calculations For Example 1

	double monthlyInterest = (interest / 100) / 12;
	double monthlyDeposit = (monthlyInterest * amount) / (pow(1 + monthlyInterest, duration) -1 );

	//Display Results For Example 1

	cout << setw(40) << right << "Monthly Deposit Amount: $" << monthlyDeposit << endl;

}
