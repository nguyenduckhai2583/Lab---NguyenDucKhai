#include <iostream>

using namespace std;

class BankAccount
{
	private:
		string name;
		double balance;
		long id;
	
	public:
		BankAccount()
		{
			balance = 0 ;
			id = 0 ;
		}
		BankAccount(string name, double balance, long id)
		{
			this->name = name;
			this->balance = balance;
			this->id = id;
		}
		
		void setBalance(double value)
		{
			balance = value;
		}
		
		void setID(long value)
		{
			id = value;
		}
		
		void deposit(double value)
		{
			balance += value;
		}
		
		double withdraw(double value)
		{
			 balance -= value;
		}
		
		void display()
		{
			cout <<"Name: " <<name<<endl;
			cout <<"ID: " <<id<<endl;
			cout <<"Balance: " <<balance<<endl;	
		}
		
};

	int main()
	{
		double cash;
		int choose;
		char check;
		
		BankAccount bank1("Khai", 10000, 1605);
		
		bank1.display();
		
		
		while (check != 'Y')
		{
			
			cout <<"Do you want to deposit(1) or withdraw(2) or exit(0)?"<<endl;
			cin >> choose;
			
			switch(choose)
			{
			case 1:	
				cout << "Enter money deposit:";
				cin >> cash;
				bank1.deposit(cash);
				bank1.display();
				break;
			
			case 2:
				cout <<"Enter money withdraw:";
				cin >> cash;
				bank1.withdraw(cash);
				bank1.display();
				break;
			
			case 0:
				check = 'Y';
			}
		
			
		}
		
		
	}



