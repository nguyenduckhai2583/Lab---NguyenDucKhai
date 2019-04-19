#define maxstacksize 20
#include <iostream>

using namespace std;

class stack
{
	private:	
		int top = -1;
		int	s[maxstacksize];
	
	public:
		bool isEmpty()
		{
			if(top<0)
			return true;
			else
			return false;
		}
		
		void push(int value)
		{
			if(top == maxstacksize)
			{
				cout <<"Stack Full"<<endl;
			}
			else
			{
				top++;
				s[top] = value;
			}
		}
		
		void pop()
		{
			if (top<0)
			{
				cout << "Stack NULL, cannot pop" <<endl;
			}
			else
			{
				top--;
				return;
			}
		}
		
		double getTop()
		{
			if (top < 0)
			{
				cout <<"Stack NULL, cannot get top" <<endl;
			}
			else
			{
				return s[top];
			}
		}
		
		int size()
		{
			return top+1;
		}
		
		void display()
		{
			for (int i = top; i >= 0; i--)
			{
				cout << s[i] << " ";
			}
			cout <<endl;
		}
};

 main()
{
	stack s1;
	int value, number, choose;
	char check;
	
	
	cout <<"How many value you want to add? ";
	cin >> number;
	
	for (int i = 0;i<number;i++)
	{
		cout << "Enter value " <<i+1<<" : ";
		cin >> value;
		s1.push(value);
	}
	
	s1.display();

	
	while (check != 'Y')
	{
		cout << "Do you want to push(1), pop(2), get top value(3), get size of stack(4), print stack(5), exit(0) : ";
		cin >> choose;
		switch (choose)
		{
	
			case 0:
				check = 'Y';
				break;
			
			case 1:
				cout <<"Enter value you want to push to stack: ";
				cin >> value;
				s1.push(value);
				s1.display();
				break;
			
			case 2:
				cout <<"Done"<<endl;
				s1.pop();
				s1.display();
				break;
				
			case 3:
				cout <<"Value at top is: " << s1.getTop() <<endl;
				break;
			
			case 4:
				cout << "Size of stack is: " << s1.size() << endl;
				break;
			
			case 5:
				s1.display();
				break;
		}
	}

}
