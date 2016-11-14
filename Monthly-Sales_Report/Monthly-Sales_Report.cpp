/*  Abuzar Noorali
Purpose/Description: This program recieves monthly sales for 5 products and 4 salespeople, then displays a columnar table showing monthly totals for each salesperson and
the specific product.
*/

#include <iostream>
using namespace std;

int main()
{
	//Setup arrays & variables
	int salesPerson[4] = { 1, 2, 3, 4 };							//Array holding the names of the sales people
	int productNumber[5] = { 1, 2, 3, 4, 5 };						//Array holding the number of product

	double sales[5][4];												//2 dimensional array holding the numerical value of sales
	double salesTotalMonthly[5];									//Array holding the end of month total for a product
	double salesTotalSalesPerson[5];								//Array holding the end of month total for a salesperson

	double salesInput = 0.0;										//Variable to hold user input
	double sumTotalHolderMonthly = 0.0;								//Variable to calculate and hold the end of month total for a product
	double sumTotalHolderSalesPerson = 0.0;							//Variable to calculate and hold the end of month total for a salesperson


	//Get sales figures from user
	for (int i = 0; i < 5; i++)
	{
		sumTotalHolderMonthly = 0.0;								//Reset end of month total of a product

		for (int a = 0; a < 4; a++)
		{															//Get an input for each respective product for each respective salesmember
			cout << "Please enter the sales total of product #" << productNumber[i] << " for person :" << salesPerson[a] << " $";
			cin >> salesInput;
			sales[i][a] = salesInput;								//Assign input to the 2d array
			sumTotalHolderMonthly = (sumTotalHolderMonthly + salesInput);
		}

		salesTotalMonthly[i] = sumTotalHolderMonthly;				//Assign the total monthly sales for this product to the monthly total array

	}

	//Skip two lines
	cout << "\n\n";



	//Display tabular chart, and monthly totals

	cout << "Sales person #: \t";


	//Display the sales people
	for (int e = 0; e < 4; e++)
	{
		cout << "#" << salesPerson[e] << "\t";
	}


	//Setup for monthly sales
	cout << "Total Monthly Sales";
	//Display a line
	cout << "\n_____________________________________________________________________________\n";



	//Display the product numbers
	for (int c = 0; c < 5; c++)
	{
		cout << "\n";
		cout << "Product #:" << productNumber[c] << "\t";

		//Display the individual sales figures 
		for (int d = 0; d < 4; d++)
		{
			cout << "\t";
			cout << "$" << sales[c][d];							//Display monthly totals for products
		}
		cout << "\t\t$ " << salesTotalMonthly[c] << "\n";
	}



	//Display a line & setup sales person monthly totals
	cout << "_____________________________________________________________________________\n";
	cout << "\nSalesperson Total:";



	//Display the monthly totals for salespersons
	for (int f = 0; f < 4; f++)
	{
		for (int g = 0; g < 5; g++)
		{
			sumTotalHolderSalesPerson = (sumTotalHolderSalesPerson + sales[g][f]);
		}

		salesTotalSalesPerson[f] = sumTotalHolderSalesPerson;
		cout << "\t$" << salesTotalSalesPerson[f];				//Display monthly totals for salespeople
		sumTotalHolderSalesPerson = 0.0;
	}



	cout << "\n\n";
	return 0;
}