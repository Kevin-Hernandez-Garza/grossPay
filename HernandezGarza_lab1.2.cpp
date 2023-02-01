//******************************************************************
// Author: Kevin Hernandez-Garza
// Assignment Number: Programming Assignment "2"
// File Name: kevinHernandezGarza_lanOnePartOne.cpp
// Course/Section: COSC 1337 Section -009
// Due Date: 2/4/23
// Instructor: Dr.Haytham Mohamed
//
// This program computes a basketball player's height
// by using the modulus  and division operations
//  ******************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declaring variables as integers
    int feet, inches, height;

    // declaring the height value
    height = 74;

    // calculating the feet and inches using the modulus and division operations
    feet = height / 12;
    inches = height % 12;

    // logging the results to the console
    cout << "A 74 inch tall basketball player is " << feet << " feet " << inches << " inches tall." << endl;

    return 0;
}