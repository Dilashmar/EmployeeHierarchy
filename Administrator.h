#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "SalariedEmployee.h"

class Administrator:public SalariedEmployee
{
  public:
    Administrator(); // default constructor


    Administrator(string name, string ssn, string title, double salary, double bonus);
    

     //pre-condition:Accessor function that accesses  private string variable as a constant.
     //postcondition: function returns job_title.
    string get_job_title() const; 

     //pre-condition: Accessor function that accesses private double variable as a constant
     //postcondition: function returns bonus
    double get_bonus() const; //getter function for bonus


     //pre-condition: constant virtual function that returns a double
     //postcondition: function returns the sum of bonus and salary.
	virtual double get_net_pay() const; 

     //pre-condition: const void virtual function that prints the check
     //postcondition: parent function is overriden by child
    virtual void print_check() const;

     //pre-condition: virtual function that takes in input from objects of istream and ostream
     //postcondition: function returns in object that stores the input by user
    virtual istream& promptInput(istream & in, ostream & out);
  
  private: 
    string job_title;
    double bonus;

};

#endif
