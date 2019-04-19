#include <iostream>
#include <math.h>

using namespace std;

class MyUlti
{
	public:
		long factorial (int number)
		{
			long result = 1;
			for (int i = 2; i <= number; i++)
			{
				result *= i;
			}
			return result;
		}
		
		bool isPrime(int number)
		{
			for (int i = 2; i < sqrt(number); i++)
			{
				if (number%i == 0)
				return false;
			}
			return true;
		}
		
		bool isTriangle (double num1, double num2, double num3)
		{
			if ( ( num1 < (num2 + num3)) && (num2 < (num1 + num3)) && (num3 < (num1 + num2)) 	)
			return true;
			else 
			return false;
		}
};
	
	main()
	{
		MyUlti Demo;		
		double a = 11, b = 7, c = 3;
		cout <<"Factorial of" << c << " is " << Demo.factorial(3) <<endl;
		cout << "Is " << b <<   " a prime number ? " << Demo.isPrime(b) <<endl;
		cout <<"Is " << a <<" "<< b <<  " "<< c << " a triagle? " << Demo.isTriangle(a,b,c);
	}
