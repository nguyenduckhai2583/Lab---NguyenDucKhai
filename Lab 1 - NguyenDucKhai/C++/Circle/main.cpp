#include <iostream>

using namespace std;

class circle
{
	private:
		double radius;
		
	public:
		circle(double value)
		{
			radius = value;
		}
		
		double getRadius()
		{
			return radius;
		}
		
		double getArea()
		{
			return radius * radius * 3.1419;
		}
		
		double getPerimeter()
		{
			return 2 * radius * 3.1419;
		}
};

main()
{
	circle c1(10);
	cout <<"Radius: " << c1.getRadius() << endl;
	cout <<"Area: " << c1.getArea() << endl;
	cout <<"Perimeter: " << c1.getPerimeter();
}
