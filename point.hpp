#ifndef POINT.HPP
#define POINT.HPP

class Point {
 

public:
  
  int get_x() const;
  int get_y() const;
  void set_x(int x);
  void set_y(int y);
  
  void move_point_x(int step_x);
  void move_point_y(int step_y);
  void move_point(int step_x,int step_y);
  double distance_from_origin() const;
  void print_point() const;
private:

  int x{};
  int y{};

};
#endif