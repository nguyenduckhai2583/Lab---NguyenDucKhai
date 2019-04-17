#include <iostream>

using namespace std;

class cube
{
	private:
		double edge;
	
	public:
		
		cube(double e)
		{
				edge = e;
		}
		
			
		double getEdge()
		{
				return edge;
		}
		
			
		double getVolume()
		{
			return edge * edge * edge;
		}
	};

main()
{
	cube c1(10);
	cout <<"Edge: " << c1.getEdge()<<endl;
	cout <<"Volume: " << c1.getVolume();
}
