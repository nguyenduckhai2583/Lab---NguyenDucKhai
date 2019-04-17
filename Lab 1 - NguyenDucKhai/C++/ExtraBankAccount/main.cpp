#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class BankAccount
{
	private:
		string name;
		double balance;
		long id;
	
	public:
	
		BankAccount(string name, double balance, long id)
		{
			this->name = name;
			this->balance = balance;
			this->id = id;
		}
		
		BankAccount()
		{
			name ="";
			balance = 0;
			id = 0;
		}
		
		void setBalance(double value)
		{
			this->balance = value;
		}
		
		double getBalance()
		{
			return balance;
		}
		
		double getID()
		{
			return id;
		}
		
		void deposit(double value)
		{
			balance += value;
		}
		
		double withdraw(double value)
		{
			 balance -= value;
		}
		
		void createAccount()
		{
			cout <<"Enter Name: ";
			cin >> name;
			cout << "Enter Id: ";
			cin >> id;
			cout <<"Enter Balance: ";
			cin >>balance;
		}
		
		void display()
		{
			cout <<left<< setw(14)<<name<<setw(12)<<id<<setw(10)<<balance<<endl;	
		/*	cout <<"Name: " <<name<<endl;
			cout <<"ID: " <<id<<endl;
			cout <<"Balance: " <<balance<<endl;	*/
		}
		
		void transferMoney(BankAccount &bank, double value)
		{
				balance -= value;
				bank.balance += value;
		}
		
		double bankrate(int month, double rate)
		{
			return balance + balance*rate/100/12*month;
		}
};
	
	void title();
	void yourbanktitle();

	int main()
	{
		double cash;
		int choose;
		char check;
		long temp;
		int count = 0;
		int numberbank;
		int month;
		double rate;
		
		BankAccount bankown("Khai", 10000, 1605);
		yourbanktitle();
		title();
		bankown.display();
		cout<<endl;		
			
		BankAccount bank[20];
	
		cout <<"How many bank you want to add: ";
		cin >> numberbank;
		if(numberbank > 0)
		{
			for(int i = 0; i<numberbank;i++)
			{
				cout <<"Enter bank " <<i+1<<endl;
				bank[i].createAccount();
			}
			title();
			for(int i = 0; i<numberbank;i++)
			{
				bank[i].display();
			}		
		}
		
	/*	while (check !='N')
		{
			cout <<"Enter bank:" <<i<<endl;
			bank[i].createAccount();
			bank[i].display();
			i++;
			cout <<"You want to add more ? (N) to stop, (Y) to continue";
			cin >> check;
		}
	*/	
		
		while (check != 'Y')
		{
			cout <<"Do you want to deposit(1),  withdraw(2), Tranfer money(3), AddBankAccount(4), CountBankRate(5) or exit(0)?"<<endl;
			cin >> choose;
			
			switch(choose)
			{
			case 0:
				check = 'Y';
				break;
				
			case 1:	
				cout << "Enter money deposit: ";
				cin >> cash;
				bankown.deposit(cash);
				yourbanktitle();
				title();
				bankown.display();
				break;
			
			case 2:
				cout <<"Enter money withdraw: ";
				cin >> cash;
				bankown.withdraw(cash);
				yourbanktitle();
				title();
				bankown.display();
				break;
			
			case 3:
				cout <<"Enter ID you want to transfer money: ";
				cin>>temp;
				
				for(int i=0;i<3;i++)
				{
					if(temp == bank[i].getID())
					{
						cout <<"Enter money to transfer: ";
						cin >> cash;
						bankown.transferMoney(bank[i], cash);
						bankown.display();
						bank[i].display();
						count++;
					}
				}
				
				if (count == 0)
				{				
					cout <<"No ID Found, Transfer fail"<<endl;
				}		
				break;
			
			case 4:
				cout <<"Enter bank" <<numberbank+1<<endl;
				bank[numberbank].createAccount();
				
				title();
				for(int i = 0;i<numberbank+1;i++)
				{
					bank[i].display();
				}
				numberbank++;
				break;
			
			case 5:
				cout <<"Enter rate (% / year): ";
				cin >> rate;
				cout <<"How many months you want to: ";
				cin >> month;
				cout <<"Your money after "<<month<<" month: "<<bankown.bankrate(month, rate)<<endl;
				
			}
		
		}
		
	}


	void yourbanktitle()
	{
		cout <<left<<setw(10)<<"Your bank details"<<endl;
	}
	
	void title()
	{
		cout <<"Name          ID          Balance"<<endl;
	}
