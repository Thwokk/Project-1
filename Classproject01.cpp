#include <iostream>
#include <string>
using namespace std;

/*
 * Class: CMSC140 30346
 * Instructor: Prof. Aygun
 * Project 01
 * Description: Stock Transaction Program User needs to calculate the amount of profit that user 
 made after buying and then selling his stock and paying the two commissions to his broker. For example, 
 your program asks the user for all information about stocks, the user entered all information, 
 and then your Program calculates the amount of profit that user made after buying and then 
 selling his stock and paying the two commissions to his broker.
 * Due Date: 02/23/25
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Bryce Haines
*/

int main()
{
	double numberOfShares, //number of shares the user bought//  
		costOfStock,
		userPaid,//Price the stock cost to buy//
		stockbrokerCommission,
		commissionPaid,//percent the stockbroker charged//
		totalOwed,
		stockToSell,
		costToSell,
		sellTotal,
		stockbrokerSellFee,
		saleCommission,
		finalSale,
		totalProfit;
	string name, //the users name//
		stockName;
	int yes = 1,
		no = 0;
	cout << "----Hello, welcome to the stock transaction program----" << endl << endl;
	cout << "What is your name? " << endl;
	getline(cin, name);
	cout <<endl << "Welcome " << name << "!" <<endl;
	cout << "What Stock did you buy? :" << endl;
	getline(cin, stockName);
	cout << "How much " << stockName << " stock did you buy?" << endl;
	cin >> numberOfShares;
	cout << "How much did the stock cost?" << endl <<"$";
	cin >> costOfStock;
	userPaid = numberOfShares * costOfStock; //total cost the user paid for the shares alone//	
	cout << "Total cost of stock: $" << userPaid;
	cout << endl << "What was the stockbrokers commission?" << endl <<"%";
	cin >> stockbrokerCommission;
	commissionPaid = userPaid * stockbrokerCommission; //ammount the stockbroker made//
	cout << "The stockbroker's fee is: $" << commissionPaid << endl;
	totalOwed = commissionPaid + userPaid;
	cout << "Your total owed is: $" << totalOwed << endl;
	cout << "Do you wish to sell any stock? Type 1 for yes or 0 for no. " << endl;
	cin>>  yes or no;
	if (yes)
	{
		cout << "How much stock do you want to sell?" << endl;
		cin >> stockToSell;
		cout << endl << "How much does the stock cost now?" << endl;
		cin >> costToSell;
		cout << "What is the stockbroker fee? :" << endl << "%";
		cin >> stockbrokerSellFee;
		sellTotal = stockToSell * costToSell;
		saleCommission = sellTotal * stockbrokerSellFee;
		finalSale = sellTotal - saleCommission;
		cout << "The stockbrokers fee is $" << endl; << saleCommission << endl;
		cout << endl << "Total after selling:" << endl << "$" << finalSale<< endl;
		totalProfit = finalSale - totalOwed;
		cout << "The toal profit after selling the stock and paying the broker fees is:" << endl << "$" << totalProfit;

	}
	else
	{
		cout<<endl << "Thank you for using the stock transaction program." << endl;
	}



	return 0;
}