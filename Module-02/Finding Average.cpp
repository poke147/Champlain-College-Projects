/*
	Author: Zachary Brady

	Class : CSI-140 02
	Assignment : Lab 2A
	Date Assigned : 9/4/2019
	Due Date : 9/4/2019 12:15

	Description :
		This program is intended to display the grades of five sperate quizes and take the average.

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
using namespace std;

int main()
{
	//Variables
	int quiz1 = 55;	
	int quiz2 = 87;
	int quiz3 = 92;
	int quiz4 = 63;
	int quiz5 = 97;
	int grades = quiz1 + quiz2 + quiz3 + quiz4 + quiz5;

	//Average
	float averageGrade = grades / 5.0;

	//Print
	cout << "Quiz 1: " << quiz1 << endl;
	cout << "Quiz 2: " << quiz2 << endl;
	cout << "Quiz 3: " << quiz3 << endl;
	cout << "Quiz 4: " << quiz4 << endl;
	cout << "Quiz 5: " << quiz5 << endl;
	cout << "Avg   : " << averageGrade;
}
