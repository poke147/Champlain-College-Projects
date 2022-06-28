/*
Author: Zachary Brady

Class: CSI-140-01/02

Assignment: Module-05 Assignment-2A

Date Assigned: 10/2/2019

Due Date: 10/8/2019 11:59pm

Description:
This program is intended to take stock information from an input file the user provides, and calculate Buying and Selling amount, Buying and Selling commision
and Profit into the desired output file.

Certification of Authenticity:
I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the
definition and consequences of plagiarism and acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking
service (which may then retain a copy of this assignment on its
database for the purpose of future plagiarism checking)
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;

int main()
{
	//Variable Declaration
	string stockName;
	double buyingCost;
	double buyingCommissionPercentage;
	int numberOfSharesBought;
	double sellingCost;
	double sellingCommissionPercentage;
	int numberOfSharesSold;
	string junk;

	string inputFileName;
	string outputFileName;

	double buyingAmtG;
	double buyingCommG;
	double sellingAmtG;
	double sellingCommG;
	double profitG;

	double buyingAmtA;
	double buyingCommA;
	double sellingAmtA;
	double sellingCommA;
	double profitA;

	double buyingAmtM;
	double buyingCommM;
	double sellingAmtM;
	double sellingCommM;
	double profitM;

	double totalBuyingAmt;
	double totalBuyingComm;
	double totalSellingAmt;
	double totalSellingComm;
	double grandProfit;


	//User Input
	cout << "What Input File Are You Using? ";
	getline(cin, inputFileName);
	cout << "What Output File Are You Using? ";
	getline(cin, outputFileName);

	// I/O File Reading
	ifstream fin(inputFileName);
	if (fin.fail()) {
		cout << inputFileName << " Cannot Be Opened For Reading";
		return 0;
	}

	ofstream fout(outputFileName, ios::app);
	if (fout.fail()) {
		cout << outputFileName << " Cannot Be Opened For Writing";
		return 0;
	}

	//Google File Reading
	getline(fin, stockName);
	fin >> buyingCost;
	fin >> buyingCommissionPercentage;
	fin >> numberOfSharesBought;
	fin >> sellingCost;
	fin >> sellingCommissionPercentage;
	fin >> numberOfSharesSold;
	getline(fin, junk);

	//Google Calculations
	buyingAmtG = buyingCost * numberOfSharesBought;
	buyingCommG = (buyingCommissionPercentage / 100) * buyingAmtG;
	sellingAmtG = sellingCost * numberOfSharesSold;
	sellingCommG = (sellingCommissionPercentage / 100) * sellingAmtG;
	profitG = sellingAmtG - (buyingAmtG + buyingCommG + sellingCommG);

	//Google Output
	fout << setprecision(2) << fixed;

	fout << setw(20) << left << "Stock: " << stockName << endl;
	fout << setw(15) << right << " Buying Cost: " << buyingAmtG << " |";
	fout << setw(15) << right << " Buying Commission Percentage: " << buyingCommissionPercentage << " |";
	fout << setw(15) << right << " Buying Commission: " << buyingCommG << " |";
	fout << setw(15) << right << " Number Of Shares Bought: " << numberOfSharesBought << endl;
	fout << setw(15) << right << " Selling Cost: " << sellingAmtG << " |";
	fout << setw(15) << right << " Selling Commission Percentage: " << sellingCommissionPercentage << " |";
	fout << setw(15) << right << " Selling Commission: " << sellingCommG << " |";
	fout << setw(15) << right << " Number Of Shares Sold: " << numberOfSharesSold << endl;
	fout << setw(15) << right << "Profit: " << profitG << endl;

	cout << setprecision(2) << fixed;

	cout << setw(20) << left << "Stock: " << stockName << endl;
	cout << setw(15) << right << " Buying Cost: " << buyingAmtG << " |";
	cout << setw(15) << right << " Buying Commission Percentage: " << buyingCommissionPercentage << " |";
	cout << setw(15) << right << " Buying Commission: " << buyingCommG << " |";
	cout << setw(15) << right << " Number Of Shares Bought: " << numberOfSharesBought << endl;
	cout << setw(15) << right << " Selling Cost: " << sellingAmtG << " |";
	cout << setw(15) << right << " Selling Commission Percentage: " << sellingCommissionPercentage << " |";
	cout << setw(15) << right << " Selling Commission: " << sellingCommG << " |";
	cout << setw(15) << right << " Number Of Shares Sold: " << numberOfSharesSold << endl;
	cout << setw(15) << right << "Profit: " << profitG << endl;

	//Apple File Reading
	getline(fin, stockName);
	fin >> buyingCost;
	fin >> buyingCommissionPercentage;
	fin >> numberOfSharesBought;
	fin >> sellingCost;
	fin >> sellingCommissionPercentage;
	fin >> numberOfSharesSold;
	getline(fin, junk);

	//Apple Calculations
	buyingAmtA = buyingCost * numberOfSharesBought;
	buyingCommA = (buyingCommissionPercentage / 100) * buyingAmtA;
	sellingAmtA = sellingCost * numberOfSharesSold;
	sellingCommA = (sellingCommissionPercentage / 100) * sellingAmtA;
	profitA = sellingAmtA - (buyingAmtA + buyingCommA + sellingCommA);

	//Apple Output
	fout << setprecision(2) << fixed;

	fout << setw(20) << left << "Stock: " << stockName << endl;
	fout << setw(15) << right << " Buying Cost: " << buyingAmtA << " |";
	fout << setw(15) << right << " Buying Commission Percentage: " << buyingCommissionPercentage << " |";
	fout << setw(15) << right << " Buying Commission: " << buyingCommA << " |";
	fout << setw(15) << right << " Number Of Shares Bought: " << numberOfSharesBought << endl;
	fout << setw(15) << right << " Selling Cost: " << sellingAmtA << " |";
	fout << setw(15) << right << " Selling Commission Percentage: " << sellingCommissionPercentage << " |";
	fout << setw(15) << right << " Selling Commission: " << sellingCommA << " |";
	fout << setw(15) << right << " Number Of Shares Sold: " << numberOfSharesSold << endl;
	fout << setw(15) << right << "Profit: " << profitA << endl;

	cout << setprecision(2) << fixed;

	cout << setw(20) << left << "Stock: " << stockName << endl;
	cout << setw(15) << right << " Buying Cost: " << buyingAmtA << " |";
	cout << setw(15) << right << " Buying Commission Percentage: " << buyingCommissionPercentage << " |";
	cout << setw(15) << right << " Buying Commission: " << buyingCommA << " |";
	cout << setw(15) << right << " Number Of Shares Bought: " << numberOfSharesBought << endl;
	cout << setw(15) << right << " Selling Cost: " << sellingAmtA << " |";
	cout << setw(15) << right << " Selling Commission Percentage: " << sellingCommissionPercentage << " |";
	cout << setw(15) << right << " Selling Commission: " << sellingCommA << " |";
	cout << setw(15) << right << " Number Of Shares Sold: " << numberOfSharesSold << endl;
	cout << setw(15) << right << "Profit: " << profitA << endl;

	//Microsoft File Reading
	getline(fin, stockName);
	fin >> buyingCost;
	fin >> buyingCommissionPercentage;
	fin >> numberOfSharesBought;
	fin >> sellingCost;
	fin >> sellingCommissionPercentage;
	fin >> numberOfSharesSold;
	getline(fin, junk);

	//Microsoft Calculations
	buyingAmtM = buyingCost * numberOfSharesBought;
	buyingCommM = (buyingCommissionPercentage / 100) * buyingAmtM;
	sellingAmtM = sellingCost * numberOfSharesSold;
	sellingCommM = (sellingCommissionPercentage / 100) * sellingAmtM;
	profitM = sellingAmtM - (buyingAmtM + buyingCommM + sellingCommM);

	//Microsoft Output
	fout << setprecision(2) << fixed;

	fout << setw(20) << left << "Stock: " << stockName << endl;
	fout << setw(15) << right << " Buying Cost: " << buyingAmtM << " |";
	fout << setw(15) << right << " Buying Commission Percentage: " << buyingCommissionPercentage << " |";
	fout << setw(15) << right << " Buying Commission: " << buyingCommM << " |";
	fout << setw(15) << right << " Number Of Shares Bought: " << numberOfSharesBought << endl;
	fout << setw(15) << right << " Selling Cost: " << sellingAmtM << " |";
	fout << setw(15) << right << " Selling Commission Percentage: " << sellingCommissionPercentage << " |";
	fout << setw(15) << right << " Selling Commission: " << sellingCommM << " |";
	fout << setw(15) << right << " Number Of Shares Sold: " << numberOfSharesSold << endl;
	fout << setw(15) << right << "Profit: " << profitM << endl;

	cout << setprecision(2) << fixed;

	cout << setw(20) << left << "Stock: " << stockName << endl;
	cout << setw(15) << right << " Buying Cost: " << buyingAmtM << " |";
	cout << setw(15) << right << " Buying Commission Percentage: " << buyingCommissionPercentage << " |";
	cout << setw(15) << right << " Buying Commission: " << buyingCommM << " |";
	cout << setw(15) << right << " Number Of Shares Bought: " << numberOfSharesBought << endl;
	cout << setw(15) << right << " Selling Cost: " << sellingAmtM << " |";
	cout << setw(15) << right << " Selling Commission Percentage: " << sellingCommissionPercentage << " |";
	cout << setw(15) << right << " Selling Commission: " << sellingCommM << " |";
	cout << setw(15) << right << " Number Of Shares Sold: " << numberOfSharesSold << endl;
	cout << setw(15) << right << "Profit: " << profitM << endl;

	//Total Calculations
	totalBuyingAmt = buyingAmtG + buyingAmtA + buyingAmtM;
	totalBuyingComm = buyingCommG + buyingCommA + buyingCommM;
	totalSellingAmt = sellingAmtG + sellingAmtA + sellingAmtM;
	totalSellingComm = sellingCommG + sellingCommA + sellingCommM;
	grandProfit = profitG + profitA + profitM;

	//Total Output
	fout << setw(15) << right << "Total Buying Amount: " << totalBuyingAmt << endl;
	fout << setw(15) << right << "Total Buying Commission: " << totalBuyingComm << endl;
	fout << setw(15) << right << "Total Selling Amount: " << totalSellingAmt << endl;
	fout << setw(15) << right << "Total Selling Commission: " << totalSellingComm << endl;
	fout << setw(15) << right << "Grand Profit: " << grandProfit << endl;

	cout << setw(15) << right << "Total Buying Amount: " << totalBuyingAmt << endl;
	cout << setw(15) << right << "Total Buying Commission: " << totalBuyingComm << endl;
	cout << setw(15) << right << "Total Selling Amount: " << totalSellingAmt << endl;
	cout << setw(15) << right << "Total Selling Commission: " << totalSellingComm << endl;
	cout << setw(15) << right << "Grand Profit: " << grandProfit << endl;

	fin.close();
	fout.close();
}


