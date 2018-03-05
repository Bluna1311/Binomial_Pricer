#pragma once
#include <vector>
class Tree
{
public:
	Tree(); // This gets Data as part of constructor since all stock will have different Data;
	void Get_stock_Data();
	void FillTree(vector <int,int> *tree , vector <int, double> *payoff);



private:
	double M_RisKFreeUp;
	double M_riskFreeDown;
	double M_Time_Step;
	double M_K;
	double M_stockPrice;
	vector <int,double> tree;
	vector <int , int> payoff;
};
