#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    private:
        int x, y, a , b;
    public:
    Point(int, int, int, int);
    ~Point();
    bool operator==(Point & s);
        
        
};

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

    if (answer1 != answer2)
        cerr << "The points are not in the curve";
}

 bool Point::operator==(Point & s)
 {
     return x == s.x && y == s.y && a == s.a && b == s.b;
 }

 Point::~Point(){}


int main()
{
    Point p1(-1, -1, 5, 7);
    Point p2(-1, -2, 5, 7);

    return 0;
}