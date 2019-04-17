#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class Point3D
{
	private:
		double x, y, z;
	
	public:
		
		Point3D(double a, double b, double c)
		{
			x = a;
			y = b;
			z = c;
		}
		
		double distanceFrom(Point3D P)
		{
			return sqrt(pow(x - P.x, 2) + pow(y - P.y, 2) + pow(z-P.z, 2) );
		}
		
		double distanceFromCenter()
		{
			return distanceFrom(0,0,0);
		}
		
		double distanceFrom(double xVal, double yVal, double zVal)
		{
			return sqrt( pow(x - xVal, 2) + pow(y - yVal, 2) + pow(z - zVal, 2) );
		}
		
		void display()
		{
			cout <<"Detail " << x <<"," << y <<  ","<< z << endl;
		}
};

	int main() 
	{
		Point3D P1(2,3,4);
		Point3D P2(4,5,6);
		
		cout <<"Point 1 "; P1.display();
		cout <<"Point 2 "; P2.display();
		
		cout <<"Distance from P1 to center: " << P1.distanceFromCenter() << endl;
		cout <<"Distance from P2 to center: " << P2.distanceFromCenter() << endl;
		cout <<"Distance from P1 and P2: " << P1.distanceFrom(P2) << endl;
		
		cout <<"Test: " << P1.distanceFrom(0,0,0);
	}
