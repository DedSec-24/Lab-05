#include "ShapeArea.h"
#include <iostream>
using namespace std;
struct Circle {
  float radius;
} c;
struct Rectangle {
  float length;
  float width;
} r1, r2;
struct Squre {
  float length;
} s;

int main() {

  float area, cost, total_cost;

  c.radius = 5.0;
  r1.length = 7.0;
  r1.width = 3.0;
  r2.length = 28.0;
  r2.width = 15.0;
  s.length = 4.0;

  area = areaRectangale(r2.length, r2.width) -
         (areaCircle(c.radius) + areaRectangale(r1.length, r1.width) +
          areaSqure(s.length));

  cout << area << endl
       << "Perimeter of yard : " << perimeter(r2.length, r2.width) << endl;
  cout << "Enter the cost of fence per meter : Rs.";
  cin >> cost;
  total_cost = totalcost(cost, perimeter(r2.length, r2.width));

  cout << "Cost for fixing a fence around the Yard : Rs." << total_cost;

  return 0;
}
