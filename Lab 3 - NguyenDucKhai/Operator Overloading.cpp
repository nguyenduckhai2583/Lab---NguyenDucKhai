#include <iostream>

using namespace std;

class overloadOP
{
	private:
		double value;
		
	public:
		
		overloadOP()
		{
			value = 0;
		}
		
		overloadOP(double v)
		{
			value = v ;
		}
		
		void display()
		{
			cout << "Value: " <<value <<endl;
		}
		
		friend overloadOP operator+(overloadOP a, overloadOP b);
		friend overloadOP operator-(overloadOP a, overloadOP b);
		friend overloadOP operator*(overloadOP a, overloadOP b);	
		overloadOP operator/(overloadOP &a)
		{
			overloadOP temp;
				temp.value = this->value / a.value;
			return temp;
		}
		overloadOP operator++(int);


};

	overloadOP operator+(overloadOP a, overloadOP b)
	{
		return overloadOP(a.value + b.value);
	} 
	
	overloadOP operator-(overloadOP a, overloadOP b)
	{
		return overloadOP(a.value - b.value);
	}
	
	overloadOP operator*(overloadOP a, overloadOP b)
	{
		return overloadOP(a.value * b.value);
	}
	
	overloadOP overloadOP::operator++(int) 
	{
		value++;
		return overloadOP(value);
	} 
	
main()
{
	overloadOP a(4);
	overloadOP b(5);
	overloadOP c, d;
	
	b = b / b;
	b.display();
	
	a = a*b;
	a.display();
	
	a++;
	a.display();
	
	c = a + b;
	c.display();
	
	
}

