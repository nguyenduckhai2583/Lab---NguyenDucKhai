#include <iostream>

using namespace std;

class Rectangle
{
	private:
		double width, height;
	
	public:
		Rectangle (double x, double y);
		double perimeter();
		double area();
};

 Rectangle:: Rectangle(double x, double y)
{
	width = x;
	height = y;
}
double Rectangle::perimeter()
{
	return 2*(width + height);
}
double Rectangle::area()
{
	return width * height;
}

main()
{
	Rectangle R1(4, 6);
	cout <<"Perimeter of R1 is: " << R1.perimeter() <<endl;
	cout <<"Area of R1 is: " << R1.area();
}
