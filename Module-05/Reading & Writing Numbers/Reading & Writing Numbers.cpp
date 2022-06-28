#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//Variables
	const string INPUT_FILE_NAME = "lab4.txt";
	const string OUTPUT_FILE_NAME = "lab4report.txt";
	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float fourthNumber;
	string SEPERATOR;
	SEPERATOR.append(6, '-');

	//File Reading Fail
	ifstream fin(INPUT_FILE_NAME);
	if (fin.fail()) {
		cout << INPUT_FILE_NAME << " cannot be opened for reading";
		return 0;
	}

	ofstream fout(OUTPUT_FILE_NAME, ios::app);
	if (fout.fail()) {
		cout << OUTPUT_FILE_NAME << " cannot be opened for reading";
		return 0;
	}

	//File Input Reading
	fin >> firstNumber;
	fin >> secondNumber;
	fin >> thirdNumber;
	fin >> fourthNumber;

	//File Output
	cout << setprecision(2) << fixed;
	fout << setprecision(2) << fixed;

	cout << setw(6) << right << firstNumber << endl;
	fout << setw(6) << right << firstNumber << endl;

	cout << setw(6) << right << secondNumber << endl;
	fout << setw(6) << right << secondNumber << endl;

	cout << setw(6) << right << thirdNumber << endl;
	fout << setw(6) << right << thirdNumber << endl;

	cout << setw(6) << right << fourthNumber << endl;
	fout << setw(6) << right << fourthNumber << endl;

	// Calculations
	float sum = firstNumber + secondNumber + thirdNumber + fourthNumber;

	cout << SEPERATOR << endl;
	cout << sum << endl;
  fout << SEPERATOR << endl;
	fout << sum << endl;

	fin.close();
	fout.close();
}
