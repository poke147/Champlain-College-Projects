
/*Author: Zachary Brady
	Class : CSI-140-02
	Assignment : Lab 1
	Date Assigned : 09/11/2019
	Due Date : 09/17/2019 11:59pm

Description :
		This program is intended to calculate the minimun required amount of bills (100s, 50s, 20s, 10s, 5s, 1s) to make change for a customer after a purchase.
		This program deals with whole dollar amounts only and will not make change in the form of cents.

Certification of Authenticity :
		I certify that this is entirely my own work, except where I have given
			fully - documented references to the work of others.I understand the
			definitionand consequences of plagiarismand acknowledge that the assessor
			of this assignment may, for the purpose of assessing this assignment :
			-Reproduce this assignmentand provide a copy to another member of
			academic staff;and /or
			-Communicate a copy of this assignment to a plagiarism checking
			service(which may then retain a copy of this assignment on its
				database for the purpose of future plagiarism checking)*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Variable Declaration
	int amountPaid;
	cout << setw(20) << right << "Enter Amount:";
	cin >> amountPaid;

	int hundredBills = amountPaid / 100;
	int hundredRemainder = amountPaid % 100;

	int fiftyBills = hundredRemainder / 50;
	int fiftyRemainder = hundredRemainder % 50;

	int twentyBills = fiftyRemainder / 20;
	int twentyRemainder = fiftyRemainder % 20;

	int tenBills = twentyRemainder / 10;
	int tenRemainder = twentyRemainder % 10;

	int fiveBills = tenRemainder / 5;
	int fiveRemainder = tenRemainder % 5;

	int oneBills = fiveRemainder / 1;

	//Printing
	cout << setw(20) << right << "$100 Bill(s):" << setw(20) << left << hundredBills << endl;
	cout << setw(20) << right << "$50 Bill(s):" << setw(20) << left << fiftyBills << endl;
	cout << setw(20) << right << "$20 Bill(s):" << setw(20) << left << twentyBills << endl;
	cout << setw(20) << right << "$10 Bill(s):" << setw(20) << left << tenBills << endl;
	cout << setw(20) << right << "$5 Bill(s):" << setw(20) << left << fiveBills << endl;
	cout << setw(20) << right << "$1 Bill(s):" << setw(20) << left << oneBills << endl;
}
