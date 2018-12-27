#include <iostream>
#include "Employee.h"
#include "Date.h"
using namespace std;

Employee::Employee(const string &first, const string &last, const Date &dateOfBirth const Date &dateOfHire):
  firstName(first),
  lastName(last),
  birthDate(dateOfBirth),
  hireDate(dateOfHire)
{
  cout << "Employee oject constructor: " << firstName << " " << lastName << endl;
}

void Employee::print() const
{
  cout << lastName << ", " << firstName << " Hired: ";
  hireDate.print();
  cout << " BirthDay: ";
  birthDate.print();
  cout << endl;
}

Employee::~Employee()
{
  cout << "Employee oject destructor: " << lastName << ", " << firstName << endl;
}
