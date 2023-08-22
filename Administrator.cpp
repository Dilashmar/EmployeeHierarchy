//Definitions for administrator.h functions and construtors.
#include <iostream>
#include "Administrator.h"

using namespace std;

Administrator::Administrator() //default constructor for Administrator class
{
    
}

Administrator::Administrator(string name, string SSN,string title, double salary, double bonus) //base class constructor
{
	// deliberately empty
	// cout << "Adminstrator(" << name << "," << SSN << "," << salary << "," << title << ")\n"; 
}


string Administrator::get_job_title() const
{
    return job_title; //accessor function to return private variable job title
}

double Administrator:: get_bonus() const
{
    return bonus; //accessor function to return private variable bonus.
}



double Administrator::get_net_pay() const
{
    return(get_salary()+get_bonus()); //uses accessor functions to add two private member variables.
}

void Administrator::print_check() const
{
	SalariedEmployee::print_check(); //calls parent class's print check
    cout << "Administrator Title: " << get_job_title();
    cout << "Bonus: " << get_bonus() << " Pay: " << get_net_pay();
}


istream & Administrator::promptInput(istream & in, ostream & out) 
{
	SalariedEmployee::promptInput(in,out); //calls SalariedEmployee's promptinput

    out << "Enter bonus and title: ";
    in >> bonus;
	ignorespace(in); //skips to a new line
    getline(in, job_title);

    
    return in;

}
