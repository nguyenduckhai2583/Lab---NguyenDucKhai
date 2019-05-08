#include <iostream>

using namespace std;

class complex
{
	private:
		float r;
		float i;
		
	public:
		complex()
		{
			r = 0;
			i = 0;
		}	
		
		complex(float a, float b)
		{
			r = a;
			i = b;
		}
		
		complex(const complex &a)
		{
			this->r = a.r;
			this->i = a.i;
		}
		
		complex operator+(complex &a)
		{
			complex temp;
				temp.r = this->r + a.r;
				temp.i = this->i + a.i;
			return temp;
		}
		
		complex operator-(complex &a)
		{
			complex temp;
				temp.r = this->r - a.r;
				temp.i = this->i - a.i;
			return temp;
		}
		
		complex operator*(complex &a)
		{
			complex temp;
				temp.r = this->r*a.r - this->i*a.i;
				temp.i = this->r*a.i + this->i*a.i;
			return temp;
		}
		
		bool operator==(complex &a)
		{
			return (this->r == a.r && this->i == a.i);
		}
		
		void display()
		{
		/*	cout <<"Real part is: " << r <<endl;
			cout <<"Image part is: " << i <<endl;
			cout << endl;
*/
			cout << r << " + j" << i <<endl;
		}
		
};

main()
{
	complex a(3, 4);
	a.display();
	complex b(2, 5);
	b.display();
	complex c(2, 5);
	complex cong, tru, nhan, saochep;
	
	cong = a + b;
	tru = a - b;
	nhan = a * b;
	saochep = a;
	
	cout << "cong: " << endl;
	cong.display();
	cout << "tru: " <<endl;
	tru.display();
	cout << "nhan: " << endl;
	nhan.display();
	cout << "copy: " <<endl;
	 saochep.display();
	
	if (b == c)
	cout << "bang nhau" << endl;
	else
	cout << "khac nhau" << endl;
	
	
 	
}
