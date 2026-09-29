#include <iostream>
#include "SalesCalc.h"
#include <string>
using namespace std;

int main()
{
    string name;
    double sales;
    int NoOfMonths;

    cout << "BEST BUY Sales Calc" << endl;
    cout << "===================\n" << endl;
    cout << "Enter store name ==> ";
    getline(cin, name);

    SalesCalc Gust(name);

    cout << "Enter timefame in months ==> ";
    cin >> NoOfMonths;

    for (int i = 1; i <= NoOfMonths; i++)
    {
        cout << "Enter the sales for months # " << i << " ==> ";
        cin >> sales;
        Gust.AcumSales(sales);

    }
    cout << "The Name of the Store ==> " << Gust.getname() << endl;
    cout << "The sale average is ==>" << Gust.CalcAverage(NoOfMonths) << endl;

}