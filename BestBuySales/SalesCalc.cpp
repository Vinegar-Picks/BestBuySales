#include "SalesCalc.h"
#include <iostream>
using namespace std;

SalesCalc::SalesCalc(string n)
{
	this->Name = n;
}
void SalesCalc::AcumSales(double s)
{
	this->TotalSales += s;
}
double SalesCalc::CalcAverage(int m)
{
	return this->TotalSales / m;
}
string SalesCalc::getname()
{
	return this->Name;
}