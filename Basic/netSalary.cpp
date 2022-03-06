#include <iostream>
using namespace std;

int main()
{
    float basic_salary, percentage_of_allowances, percentage_of_deductions, net_salary;

    cout << "Enter Basic salary: ";
    cin >> basic_salary;
    cout << "Enter percent of Allowances: ";
    cin >> percentage_of_allowances;
    cout << "Enter percent of Deductions: ";
    cin >> percentage_of_deductions;

    net_salary = basic_salary + basic_salary * percentage_of_allowances/100 - basic_salary * percentage_of_deductions/100;
    cout << "Net Salary is: "<<net_salary;

    return 0;
    
}