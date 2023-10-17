#include <iostream>
#include "point.hpp"
using namespace std;

int main(){
  int a{10};
  Point p1;

  p1.print_point();
  cout << endl;
  cout<< "p1 x: " << p1.get_x() << endl;
  cout<< "p1 y: " << p1.get_y() << endl;

  p1.set_x(10);
  p1.set_y(-12);

  
  cout << "After setting new values to P1" << endl;
  cout<< "p1 x: " << p1.get_x() << endl;
  cout<< "p1 y: " << p1.get_y() << endl;

  cout <<"move point in x axes direction: "<< endl;
  cout<< "p1 x: " << p1.get_x() << endl;

  return 0;

  
}