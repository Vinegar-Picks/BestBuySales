#pragma once
#include <iostream>
using namespace std;

class SalesCalc
{
private:
	string Name;
	double TotalSales = 0;
public:
	SalesCalc(string);
	void AcumSales(double);
	double CalcAverage(int);
	string getname();
};

