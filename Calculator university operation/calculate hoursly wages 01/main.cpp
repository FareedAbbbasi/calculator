// This program calculate hourly wages and , including overtime
#include <iostream>
using namespace std;
int main()
{
    double regularWages;
    double basicPayRate = 18.25;
    double regularHours = 40;
    double overTimeWage;
    double overTimeRate = 27.78;
    double overTimeHours = 10;
    double totalWage;

    //calculate the regular wages
    regularWages = basicPayRate * regularHours;

    // calculate the overtime wages
    overTimeWage = overTimeRate * overTimeHours;

    //calculate the total wages
    totalWage = regularWages + overTimeWage;

    // Display the total wages
    cout << "wages for this week are in $:" << totalWage << endl;




}
