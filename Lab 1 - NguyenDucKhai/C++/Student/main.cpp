#include <iostream>

using namespace std;

class student
{
	private:
		string name;
		long id;
		double math, physic, english;
	
		
	public:
		student(string name1, long id1)
		{
			name = name1;
			id   = id1;
		}
		double setMath(double value)
		{
			math = value;
		}
		double setPhysic(double value)
		{
			physic = value;
		}
		double setEnglish(double value)
		{
			english = value;
		}
		double getAverage()
		{
			return (math+physic+english) / 3;
		}
		
		void display()
		{
			cout <<"Name: " <<name<<endl;
			cout <<"ID: " <<id<<endl;
			cout <<"Math: " <<math<<endl;
			cout <<"Physic: " <<physic<<endl;
			cout <<"English: " <<english<<endl;
			cout <<"Average: " <<getAverage()<<endl;
		}
		
};

int main() 
{
	student std1 ("Khai", 1605);
	
	std1.setEnglish(10);
	std1.setMath(9);
	std1.setPhysic(8);
	std1.getAverage();
	
	student std2("neyu", 2206);
	std2.setEnglish(3);
	std2.setMath(4);
	std2.setPhysic(5);
	
	std1.display();
	std2.display();
}
