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

  p1.set_x(0);
  p1.set_y(10);

  
  cout << "After setting new values to P1" << endl;
  cout<< "p1 x: " << p1.get_x() << endl;
  cout<< "p1 y: " << p1.get_y() << endl;

  cout <<"move point in x axes direction: "<< endl;
  p1.move_point_x(0);
  cout<< "p1 x: " << p1.get_x() << endl;
  cout <<"move point in y axes direction: "<< endl;
  p1.move_point_y(10);
  cout<< "p1 y: " << p1.get_y() << endl;


  cout <<"distance from original point: "<< p1.distance_from_origin() <<endl;

  cout <<

  return 0;

  
}