#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    private:
        int x, y, a , b;

    public:
    Point(int, int, int, int );
    bool operator==(Point & s);
    Point operator+(Point & s);
    friend ostream & operator <<(ostream & os, const Point & s);
    ~Point();
               
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

     if (x == 0 && y == 0)
     {
          cout << "This is the point at infinity\n";
          return;
     }
       

    if (answer1 != answer2)  // We check here that the point is actually on the curve.
        cerr << "This points is not on the curve\n";
    else
    {
        answer1 == answer2;
        cout << "This point is on the curve\n ";
    }
       
   
}



ostream & operator <<(ostream & os, const Point & s)
{
	
	os << s.x << ", " << s.y << endl;
	return os;
}

 Point Point::operator+(Point & s)
{
        
         if (a != s.a || b != s.b)
            cerr << "Points are not on the same curve\n ";
         if (x == s.x && y == s.y && y == 0 * x)
         {
             cout << "Returning the point at infinity\n";
             return *this;
         }
            
         if ( x == 0)
            return s;
         if (s.x == 0)
            return *this;      
      
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
    cout << p1 << "\n"; 

    Point p2(-1, 2, 5, 7); 
    cout << p2 << "\n";

    
    Point p3(-1, -1, 5, 7);
    Point p4(-1, 1, 5, 7);
    Point inf(0, 0, 5, 7);

    cout << p3 + inf << "\n";
    cout << inf + p4 << "\n";
    cout << p3 + p4 << "\n";

    return 0;
}
