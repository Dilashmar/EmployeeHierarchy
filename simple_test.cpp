//DISPLAY 15.7 Using Derived Classes
// Author: Dilashma Rajak
//Last edited: November 25th
// This program calculates the pay for employee types admin, salaried, hourly, and commisioned using virtual functions, header files, and pointers.
#include <iostream>
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "Administrator.h"
#include "CommissionEmployee.h"
#include <vector>
using namespace std;

// payday function - using vector of pointers
void paydayPtrs(const vector<Employee*>& employeePtrs);

// payday function - using vector of pointers
void paydaySlices(const vector<Employee>& employeeSlices);

int main( )
{
    vector<Employee*> employeePtrs;
    vector<Employee> employeeSlices;
	int numberEmployees;

	cout << "Welcome to ABC Corporation!!\n";
	cout << "Enter the number of employees: ";
	cin >> numberEmployees;
	
	// Enter the number of employees
	for (int i=0; i<numberEmployees; i++)
    {
		cout <<"Enter employee #"<<(i+1)<<":\n";
		string type; 
        cout <<"Enter the type of employee (hourly, salaried, admin, commission):";
        cin >> type;

		// Request an hourly employee
		if (type=="hourly")
		{
			// Construct an HourlyEmployee
			HourlyEmployee * hourly = new HourlyEmployee();

			// Prompt for input
			hourly->promptInput(cin, cout);

			// Store in the vectors
			employeePtrs.push_back(hourly);
			employeeSlices.push_back(*hourly);
		} 
		else if (type=="salaried")
		{
			// Construct a SalariedEmployee
			SalariedEmployee * mgmt = new SalariedEmployee();

			// Prompt for input
			mgmt->promptInput(cin, cout);

			// Add to the lists
			employeePtrs.push_back(mgmt);
			employeeSlices.push_back(*mgmt);
		} 
		else if (type =="admin")
		// Construct an Adminstrator
		{
			Administrator* admin = new Administrator(); // dynamically allocates new memory for pointer object admin

            admin->promptInput(cin,cout); //pointer admin calls promptInput, which is overriden by virtual function from administrator class

            employeePtrs.push_back(admin); //admin object is stored in employee pointer vector
			employeeSlices.push_back(*admin); // admin pointer is stored in employeeslices vector.
		}
		else if (type == "commission")
		{
		   CommissionEmployee *commission = new CommissionEmployee(); //dynamically allocates new memoery for pointer object commission

            commission->promptInput(cin,cout); //commission calls for promptInput, which is overriden by virtual function from, commission class
			employeePtrs.push_back(commission); //commission object is stored in Employee pointer vector
			employeeSlices.push_back(*commission);// commission pointer object is stored in employeeSlices

		}

   }

	// Print pointers
	paydayPtrs(employeePtrs);
	paydaySlices(employeeSlices);

    for(int i = 0; i < employeePtrs.size(); i++)
    {
        delete employeePtrs[i]; //deletes dynamically allocated memory for each index
    }
    return 0;
}

//Payday! 
void paydaySlices(const vector<Employee>& employeeSlices)
{ 
   cout <<"***********************************************\n";
   cout <<"Payday Slices! Print all checks in a batch!\n";
   for (int i=0;i<employeeSlices.size();i++)

   {
   		cout << "Slice Check for " << employeeSlices[i].get_name() << endl;
   		employeeSlices[i].print_check( );
   		cout << endl;
   }
}
//Payday! 
void paydayPtrs(const vector<Employee*>& employeePtrs)
{ 
   cout <<"***********************************************\n";
   cout <<"Payday Virtual! Print all checks in a batch!\n";
   for (int i=0;i<employeePtrs.size();i++)
   {
   		cout << "Virtual Check for " << employeePtrs[i]->get_name() << endl;
   		employeePtrs[i]->print_check( );
   		cout << endl;
   }
}
