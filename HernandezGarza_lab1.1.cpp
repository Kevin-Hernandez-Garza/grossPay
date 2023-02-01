//******************************************************************
// Author: Kevin Hernandez-Garza
// Assignment Number: Programming Assignment "1"
// File Name: kevinHernandezGarza_lanOnePartOne.cpp
// Course/Section: COSC 1337 Section -009
// Due Date: 2/4/23
// Instructor: Dr.Haytham Mohamed
//
// This program computes the gross-pay of an employee making $39,000/annually
// that is made twice a month and bi-weekly. We will achieve this by computing
// the annual gross and divide  it by 24 paychecks per year, and for a bi-weekly
// pay it would be divided by 26. It then displays the inputs and results.
//  ******************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declaring variables
    double annual_pay, bi_monthly, bi_weekly;

    // assigning and calculating values to the declared variables
    annual_pay = 39000;
    bi_monthly = annual_pay / 24;
    bi_weekly = annual_pay / 26;

    // displaying results to the console
    cout << "Gross annual pay is $" << annual_pay << endl;
    cout << "Gross pay per bi-monthly paycheck is $" << bi_monthly << endl;
    cout << "Gross pay per bi-weekly paycheck is $" << bi_weekly << endl;

    // returns 0 if program fails
    return 0;
}