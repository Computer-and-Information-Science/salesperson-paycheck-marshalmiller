#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
   
   string firstName;
   string lastName;
   string fname;
   double baseSalary;
   double commissionPercent;
   double commission;
   double totalSales;
   double expenses;
   double Total;
   
   ifstream infile;
   
   cout << "Enter the name of the input file: " << endl;
   getline(cin, fname);
   infile.open(fname);
     if (!infile) {
       cout << "Could not open file " << fname << endl;
       exit(0);
        }
   infile >> firstName >> lastName;
   infile >> baseSalary >> commissionPercent >> totalSales >> expenses;
   Total = (baseSalary + commission + expenses);
   commission = commissionPercent * totalSales;
   cout << "Payroll data for " << firstName << " " << lastName <<endl;
   cout << "Base Salary: " << baseSalary << endl;
   cout << "Commission: " << (commissionPercent * totalSales) << endl;
   cout << "Expenses: " << expenses << endl;
   
   cout << "------" << endl;
   cout << "Total: " << Total ;
   
}
