#include <iostream>

using namespace std;

class test
{
	public:
	static int Cal (int a, int b)
	{
		return a*b;
	}
	static int Cal (int a)
	{
		return a*a;
	}
	static double Cal (double a)
	{
		return a*a*3.14;
	}
	static double Cal (double a, double b)
	{
		return a*b/2;
	}
};

main()
{
	test t1;
	cout <<"Area of rectangle: " << t1.Cal(4, 5)<<endl;
	cout <<"Area of square: " << t1.Cal(4)<<endl;
	cout <<"Area of circle: " << t1.Cal(6.0) <<endl;
	cout <<"Area of triangle: " << t1.Cal(2.0, 3.0) <<endl;
} 

