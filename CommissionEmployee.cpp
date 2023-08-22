//* Author: Dilashma Rajak
//* Last edited: November 25th 2022

#include "CommissionEmployee.h"



CommissionEmployee::CommissionEmployee() //default constructor
{
    
}

CommissionEmployee::CommissionEmployee(string name, string ssn, double sales, double commission)
{
	// deliberately empty
	// cout << "CommissionEmployee(" << name << "," << ssn << "," << sales << "," << commission << ")\n"; 
}

double CommissionEmployee:: getSales() const
{
    return sales; //accessor function that returns private variable sales
}

double CommissionEmployee:: getCommision_percent() const
{
    return commission_percent; //accessor function that returns private variable; commission_percent
}


double CommissionEmployee::get_net_pay() const
{
    return ((commission/100)*sales); // getter function that calculates and returns compensation
}



void CommissionEmployee::print_check() const
{
	Employee::print_check(); //calls print_check() function from Employee class
    cout << "Commission Employee." << endl;
    cout << "Gross sales: " << sales <<" Commission: " << commission << " pay: " << get_net_pay()<< endl; //displays sales and commission
    cout << "_________________________________________________\n";
}


istream& CommissionEmployee::promptInput(istream& in, ostream& out)
{
    Employee::promptInput(in, out); //calls promptinput function from Employee class
    
	cout << "Enter sales and commission: ";
    in >> sales >> commission;
    return in;
    
}
