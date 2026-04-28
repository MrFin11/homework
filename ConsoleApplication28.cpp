
#include <iostream>
using namespace std;
class Point
{
    int x, y;
public:
    static int count;
    Point() :x(0), y(0) { count++; }
    Point(int a, int b) :x(a), y(b) { count++; }
    void SetX(int a) { x = a; }
    void SetY(int b) { y = b; }
    void Print() { cout << "x= " << x << " y= " << y << endl; }
    double R() { return sqrt(pow(x, 2) + pow(y, 2)); }
    void operator -- () { x--; y--; }
  //  Point operator +(Point point) { return Point(x + point.x, y + point.y); }
    friend Point operator +(Point a, Point b);
};
Point operator +(Point a, Point b) { a.x += b.x; a.y += b.y; return a; }
int Point::count(0);
int main()
{
    Point point1, point2(2, 3), point3(4, 5);
    cout << "count= " << Point::count << endl;
    point1.Print();
    point1.SetX(6);
    point1.SetY(7);
    point1.Print();
    cout << "R1= " << point1.R() << endl; cout << "R2= " << point2.R() << endl; cout << "R3= " << point3.R() << endl;
    --point3;
    point3.Print();
    Point point4 = point2 + point3;
    point4.Print();
}