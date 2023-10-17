# include <iostream>
# include <cmath>
# include "point.hpp"  
using namespace std;




void Point::print_point() const{
  cout<< "("<< x << ", " << y << ")" << endl;
  
}
int  Point::get_x() const{
  return x;
}
int Point::get_y() const{
  return y;
}

void Point::set_x(int x) {
  if(x < 0){
      x = 0;
  }
  this->x = x;
}
void Point::set_y(int y) {
  if(y < 0){
      y = 0;
  }
  this->y = y;
}
void Point::move_point_x(int step_x){
  set_x(x + step_x);
  //x += step_x;
}
void Point::move_point_y(int step_y){
  set_y (y + step_y);
  //y += step_y;
}
void Point::move_point(int step_x,int step_y){
    set_x(x + step_x);
    set_y (y + step_y);
}

double Point::distance_from_origin() const{
  return hypot(x,y);
}
