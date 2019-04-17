#include <iostream>

using namespace std;

class rectangle
{
	private:
		double width, length;
		
	public:
		
		void setRectangle(double l, double w)
		{
			width = w;
			length = l;
		}

		double getwidth()
		{
			return width;
		}
		
		double getlength()
		{
			return length;
		}
	
		double getarea()
		{
			return width * length;
		}
		
};

main()
{
	rectangle R1;
	R1.setRectangle(10, 5);
	cout <<"length: " << R1.getlength()<<endl;
	cout <<"width: " << R1.getwidth()<<endl;
	cout <<"area: " << R1.getarea()<<endl;
	return 0;
}
