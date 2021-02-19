// James Justin Calderon
// 2-18-2021
// Program description
// This program allows the end user to calculate the hours worked
// in a 252-day work year.
// *********************************************************************

#include <iostream>

using namespace std;

int main()

{
	int dailyHoursWorked; // Daily hours worked.
	int week; // Worked hours per five-day week.
	int year; // worked hours per 252-day year. 

	cout << "The daily work hours: ";
	cin >> dailyHoursWorked;

	week = dailyHoursWorked * 5;
	year = dailyHoursWorked * 252;

	cout << "Hours per week: " << week << endl;
	cout << "Hours per year: " << year << endl;


	return 0;

}