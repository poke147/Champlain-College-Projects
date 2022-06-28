#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	// arbitrary test data, test repeats the same data thrice
	string firstName = "Fatih";
	string lastName = "Suat";
	int hourWork = 23;
	int hourRate = 5;
	double grossPay = 123.48501;
	double taxAmount = 2.4392;
	double netPay = 121.04579;

	// values for controlling format
	const int NAME_WIDTH = 15;
	const int INT_WIDTH = 7;
	const int DOUBLE_WIDTH = 12;
	const int FIELD_WIDTH = 7;
	const string SEPERATOR = " |";
	const int TOTAL_WIDTH = NAME_WIDTH * 2 + INT_WIDTH * 2 + DOUBLE_WIDTH * 3 + SEPERATOR.size() * FIELD_WIDTH - 2;
	string line;

	//Table Styling (Top)
	line.assign(TOTAL_WIDTH, '-');
	cout << SEPERATOR << line << SEPERATOR << endl;

	//Table Headings
	cout << SEPERATOR << setw(FIELD_WIDTH) << "     first name" << right;
	cout << SEPERATOR << setw(FIELD_WIDTH) << "      last name" << right;
	cout << SEPERATOR << setw(FIELD_WIDTH) << "  hours"         << right;
	cout << SEPERATOR << setw(FIELD_WIDTH) << "  rate"          << right;
	cout << SEPERATOR << setw(FIELD_WIDTH) << "   gross pay"    << right;
	cout << SEPERATOR << setw(FIELD_WIDTH) << "         tax"	  << right;
	cout << SEPERATOR << setw(FIELD_WIDTH) << "     net pay"	  << SEPERATOR << right << endl;

	//Table Styling (Mid)
	cout << SEPERATOR << line << SEPERATOR << endl;

	//Table Data Top Row
	cout << setprecision(2) << fixed;
	cout << SEPERATOR << setw(NAME_WIDTH)   << right << firstName;
	cout << SEPERATOR << setw(NAME_WIDTH)   << right << lastName;
	cout << SEPERATOR << setw(INT_WIDTH)    << right << hourWork;
	cout << SEPERATOR << setw(INT_WIDTH)    << right << hourRate;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << grossPay;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << taxAmount;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << netPay << SEPERATOR << endl;

  //Table Data Mid Row
	cout << SEPERATOR << setw(NAME_WIDTH)   << right << firstName;
	cout << SEPERATOR << setw(NAME_WIDTH)   << right << lastName;
	cout << SEPERATOR << setw(INT_WIDTH)    << right << hourWork;
	cout << SEPERATOR << setw(INT_WIDTH)    << right << hourRate;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << grossPay;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << taxAmount;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << netPay << SEPERATOR << endl;

  //Table Data Bottom Row
	cout << SEPERATOR << setw(NAME_WIDTH)   << right << firstName;
	cout << SEPERATOR << setw(NAME_WIDTH)   << right << lastName;
	cout << SEPERATOR << setw(INT_WIDTH)    << right << hourWork;
	cout << SEPERATOR << setw(INT_WIDTH)    << right << hourRate;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << grossPay;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << taxAmount;
	cout << SEPERATOR << setw(DOUBLE_WIDTH) << right << netPay << SEPERATOR << endl;

	//Table Styling (Bottom)
	cout << SEPERATOR << line << SEPERATOR << endl;
	return 0;
}
