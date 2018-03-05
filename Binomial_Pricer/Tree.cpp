#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree()
{
	cout << "Input Volatility"<<endl;
	double Sigma;
	cin >> Sigma;
	cout << "Interest Rate" << endl;
	double R;
	cin >> R;
	cout << "Stock Up increase and stock down Increase" << endl;
	double up, down;
	cin >> up >> down;
	M_RisKFreeUp = ((R - down) / (up - down));
	M_riskFreeDown = 1 - M_RisKFreeUp;
	cout << "How Many time steps would you like ?" << endl;
	cin >> M_Time_Step;
}

void Tree::Get_stock_Data()
{
	cout << "Input Strike Price" << endl;
	cin >> M_K;
	cout << "Input Stoke Value" << endl;
	cin >>	M_stockPrice;
}

void Tree::FillTree(vector <int, int> *tree , vector <int, double> *payoff)
{



}
