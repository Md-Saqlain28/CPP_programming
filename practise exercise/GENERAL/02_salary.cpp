#include <iostream>
using namespace std;

int main()
{
    float basic;
    float percentAllow;
    float percentdeduct;
    float netSalary;

    cout << "Enter the basic salary ";
    cin >> basic;

    cout << "Enter the percentage of Allowences ";
    cin >> percentAllow;

    cout << "Enter the percentage of deduction ";
    cin >> percentdeduct;

    netSalary = basic + basic*percentAllow / 100 - basic*percentdeduct / 100;

    cout << "The Net Salary is " << netSalary << endl;

}
