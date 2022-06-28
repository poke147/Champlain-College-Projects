#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// Variable Declartaion
	string name;
	char package;
	double hoursUsed;
  const double PKG_A_COST = 9.95;
  const double PKG_A_HOUR = 5;
  const double PKG_A_MINUTE_COST = 0.08;
  const double PKG_B_COST = 14.95;
  const double PKG_B_HOUR = 10;
  const double PKG_B_MINUTE_COST = 0.06;
  const double PKG_C_COST = 19.95;
  double amountDue = 0;

	//User input 
	cout << setw(41) << right << "Enter Your Name: ";
	getline(cin, name);
	cout << setw(41) << right << "What Package Do You Have? (A, B, or C): ";
	cin >> package;
	cout << setw(41) << right << "Hours Used: ";
	cin >> hoursUsed;

	//Calculations
	cout << setprecision(2) << fixed;

	if (package == 'A' || package == 'a')
	{
    amountDue = PKG_A_COST;
		if (hoursUsed > PKG_A_HOUR)
		{
      amountDue = amountDue + (hoursUsed - PKG_A_HOUR) * 60 * PKG_A_MINUTE_COST;		
		}	 
	}
	else if (package == 'B' || package == 'b')
	{
		 amountDue = PKG_B_COST;
     if (hoursUsed > PKG_B_HOUR)
     {
       amountDue = amountDue + (hoursUsed - PKG_B_HOUR) * 60 * PKG_B_MINUTE_COST;
     }
	}
	else if (package == 'C' || package == 'c')
	{
	 amountDue = PKG_C_COST;
	} 
  else
  {
    cout << "Package " << "'" <<package << "'" << " Is Not A Valid Package" << endl;
  }

// PRINTING
	string dashes;
	dashes.append(43, '-');
	cout << dashes << endl;
	cout << setw(31) << right << "Customer: " << name << endl;
	cout << setw(31) << right << "Customer Package: " << package << endl;
	cout << setw(31) << right << "Hours Used: " << hoursUsed << endl;
  cout << setw(32) << right << "Customer Amount Due: $" << amountDue << endl; 
}
