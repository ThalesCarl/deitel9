#include <iostream>
#include <vector>
using namespace std;
#include "IntegerSet.h"

int main()
{
  IntegerSet first;
  first.insertElement(2);
  first.print();
  int myInts[] = {16,2,77,28};
  IntegerSet second(myInts,4);
  second.print();
  IntegerSet third = second.intersectionOfSets(first);
  third.print(); 
  cout << third.isEqual(first) << endl;
}
