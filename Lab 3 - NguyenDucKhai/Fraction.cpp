#include <iostream>

using namespace std;

class fraction
{
	private:
		int tu;
		int mau;
	
	public:
		fraction()
		{
			tu = 0;
			mau = 1;
		}
		
		fraction(int a, int b)
		{
			tu = a;
			mau = b;
		}
		
		fraction(const fraction &a)
		{
			this->tu = a.tu;
			this->mau = a.mau;
		}
		
		int gcd(int a, int b) // UCLN
		{
			if (a == 0)
				return b;
			else
				return gcd(b%a, a);
		}
		
		void simpleform(int &a, int &b)
		{
			int ucln = gcd(a, b);
			a = a / ucln;
			b = b / ucln;
		}
		
		fraction operator+(fraction &a)
		{
			fraction temp;
				temp.tu = this->tu*a.mau + this->mau*a.tu;
				temp.mau = this->mau*a.mau;
				simpleform(temp.tu, temp.mau);
			return temp;
		}
		
		fraction operator-(fraction &a)
		{
			fraction temp;
				temp.tu = this->tu*a.mau - this->mau*a.tu;
				temp.mau = this->mau*a.mau;
				simpleform(temp.tu, temp.mau);
			return temp;
		}
		
		fraction operator*(fraction &a)
		{
			fraction temp;
				temp.tu = this->tu*a.tu;
				temp.mau = this->mau*a.mau;
				simpleform(temp.tu, temp.mau);
			return temp;
		}
		
		
		void display()
		{
			cout << tu <<"/"<< mau;
		}

	
};

main()
{
	fraction f1(1,5);
	fraction f2(2,15);
	fraction cong, tru, nhan;
	
	cong = f1 + f2;
	tru = f1 - f2;
	nhan = f1 * f2;
	
	f1.display(); cout <<" + "; f2.display(); cout <<" = "; cong.display(); cout <<endl;
	f1.display(); cout <<" - "; f2.display(); cout <<" = "; tru.display(); cout <<endl;
	f1.display(); cout <<" * "; f2.display(); cout <<" = "; nhan.display(); cout <<endl;


	
}
