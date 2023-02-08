// * * * * * * * * * * * * * * * * * * * * * * * * *
//
//  Program: prog2.cc
//
//  Name: Colin Schmitt
//  Date: February 8 2023
//  Email: cs557221@ohio.edu
//
//  Description: Takes in number of weekly sales and compares payment plans and outputs which one is better
//
// * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //1. Declare variables
    const double RATE = 5.50;
    const double COM1 = 0.10;
    const double COM2 = 0.15;
    double sales;
    double plan1;
    double plan2;

    //2. Input for sales

    cout << "Enter the weekly sales amount > ";
    cin >> sales;
    

    //3. Calculations

    plan1 = (RATE * 40) + (sales * COM1);
    plan2 = sales * COM2;

    //4. More outputs

    cout << fixed << setprecision(2);

    cout << "Amount of sales $" << sales << endl;
    cout << "Plan 1 pays $" << plan1 << endl;
    cout << "Plan 2 pays $" << plan2 << endl;

    //5. If/then statement for correct output

    if(plan1 > plan2)
    {
        cout << "Plan 1 is better" << endl;
    }

    else if(plan2 > plan1)
    {
        cout << "Plan 2 is better" << endl;
    }

    else
    {
        cout << "Plan 1 and 2 are equivalent" << endl;
    }
    
    return 0;
}