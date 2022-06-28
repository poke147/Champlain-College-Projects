#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	//Variable Declaration

	string dashes;
	dashes.append(33, '-');
	string name;
	string cityAndState;
	int negative;

	//User Input

	cout << "YOUR INPUT" << endl;
	cout <<     dashes   << endl;
	cout << "Please enter the following data" << endl;
	cout << setw(33) << right << "Your full name: ";
	getline(cin, name);
	cout << setw(33) << "City and State you live: ";
	getline(cin, cityAndState);
	cout << setw(33) << "Enter a negative number: ";
	cin >> negative;

	//Calculations
	
	int value = abs(negative);
	double square = sqrt(value);
	int nearestInteger = round(square);
	int min = nearestInteger, max = value;
	int randomNumber1;
	int randomNumber2;
	srand(time(0));
	randomNumber1 = min + rand() % ((max + 1) - min);
	randomNumber2 = min + rand() % ((max + 1) - min);

	//Display Results

	cout << dashes << endl;
	cout << "YOUR REPORT" << endl;
	cout <<     dashes    << endl;
	cout << setprecision(2) << fixed;
	cout << "Hello " << name << endl;
	cout << "You live in " << cityAndState << endl;
	cout << "Absolute value of the number you entered : " << value << endl;
	cout << setw(43) << right <<"Square root of that number : " << square << endl;
	cout << setw(43) << right << "Rounding this to nearest integer : "  << nearestInteger << endl;
	cout << "Two random numbers between " << nearestInteger << " and " << value << " are " << randomNumber1 << " and " << randomNumber2 << endl;
	cout << dashes << endl;
	cout << "END OF REPORT" << endl;
}
