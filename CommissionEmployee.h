//* Author: Dilashma Rajak
//* Last edited: November 25th 2022

//#pragma once
#include <iostream>
#include "Employee.h"

#ifndef _COMMISSION_H
#define _COMMISSION_H

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(); //default constructor


    CommissionEmployee(string name, string ssn,double sales,double commission);
        

    //pre-condition: const getter function that returns a double
    //postcondition function returns private member variable sales
    double getSales() const;

    //pre-condition: const getter function that returns a double
    //postcondition: function returns private member variable commission_percent
    double getCommision_percent() const;

    //pre-condition: const virtual function that returns a double
    //postcondition: function calculates commission and returns the resule
    virtual double get_net_pay() const; 

    //pre-condition: const void virtual function that prints check
    //postcondition: function calls parents print_check function and adds additinal displays
    virtual void print_check() const;

    //pre-condition:  virtual function that implments input and output through objects in and out of istream and ostream
    //postcondition:  function returns in object by refrence
    virtual istream& promptInput(istream& in, ostream& out);

private:
    double sales;
    double commission_percent;
    double commission;
};
#endif // _COMMISSION_H
