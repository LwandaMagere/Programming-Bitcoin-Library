#include <iostream>
#include <cmath>
#include "../FiniteField/finiteHeader.h"
using namespace std;

class Point
{
    private:
        int x, y, a , b;
    public:
    Point(int, int, int, int ); // you give default here
  //  Point();
    ~Point();
    bool operator==(Point & s);
    Point operator+(Point & s);
    friend ostream & operator <<(ostream & os, const Point & s);
        
        
};



ostream & operator <<(ostream & os, const Point & s)
{
	
	os << s.x << ", " << s.y << endl;
	return os;
}

 Point Point::operator+(Point & s)
{
         int base, exponent, k;
        
         if (x != s.x)
         {
              k = (y - s.y)/(x - s.x);
              base = k;
              exponent = 2;
              x = pow(base, exponent) - x - s.x;
              y = k * (x -s.x) - y;
              return s;
         }
         int m, j;
          
        return Point(x + s.x, y + s.y, j = 0, m = 7); // default is implied
      
}

Point::Point(int c, int d, int f, int e)
{
    x = c;
    y = d;
    a = f;
    b = e;
    int base, exponent, answer1, answer2;
    base = y;
    exponent = 2;
    answer1 = pow(base, exponent);

    base = x;
    exponent = 3;
    answer2 = pow(base,exponent) + (a * x + b);

    if (answer1 != answer2)  // We check here that the point is actually on the curve.
        cerr << "The points are not in the curve\n";
    if (x == 0 && y == 0)
        cout << "This is the point at infinity\n";
}
// Points are equal if and only if they are on the same curve and have the same
//coordinates.
 bool Point::operator==(Point & s) 
 {
     return x == s.x && y == s.y && a == s.a && b == s.b;
 }

 Point::~Point(){}


int main()
{
    // We can now create Point objects, and we will get an error if the point is not on the
    //curve:
    Point p1(-1, -1, 5, 7);
    Point p2(-1, -2, 5, 7); 

    Point p3(-1, -1, 5, 7);
    Point p4(-1, 1, 5, 7);
    Point inf(0, 0, 5, 7);

    cout << p3 + inf << "\n";
    cout << inf + p4 << "\n";
    cout << p3 + p4 << "\n";

    return 0;
}
