#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

class List
{
	private:
		node *head, *tail;
	public:
		List()
		{
			head = NULL;
			tail = NULL;
		}
		
		void CreateNode(int value)
		{
			node *temp = new node;
			temp->data = value;
			temp->next = NULL;
			
			if (head == NULL)
			{
				head = temp;
				tail = temp;
				temp = NULL;
			}
			else
			{
				tail->next = temp;
				tail = temp;
			}
		}
		
		void display()
		{
			node *temp = new node;
			temp = head;
			while (temp != NULL)
			{
				cout << temp->data << " ";
				temp = temp->next;	
			}	
			cout <<endl;
		}	
		
		void insertFirst(int value)
		{
			node *temp = new node;
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		
		void insertLast(int value)
		{
			node *temp = new node;
			temp->data = value;
			temp->next = NULL;
			
			tail->next = temp;
			tail = temp;
		}
		
		void insertPosition (int pos, int value)
		{
			node *temp = new node;
			node *cur = new node;
			node *pre = new node;
			cur = head;
			for (int i = 1; i < pos; i++)
			{
				pre = cur;
				cur = cur->next;
			}	
			
			temp->data = value;
			pre->next = temp;
			temp->next = cur;
		}
		
		void deleteFirst()
		{
			node *temp = new node;
			temp = head;
			head = head->next;
			delete temp;
		}		
		void deleteLast()
		{
			node *cur = new node;
			node *pre = new node;
			cur = head;	
			while (cur->next != NULL)
			{
				pre = cur;
				cur = cur->next;
			}	
			
			tail = pre;
			pre->next = NULL;
			delete cur;		
		}
		void deletePosition(int pos)
		{
			node *cur = new node;
			node *pre = new node;
			cur = head;
			for (int i = 1; i < pos; i++)
			{
				pre = cur;
				cur = cur->next;
			}
			pre->next = cur->next;
		}
		int getSize()
		{
			int count = 0;
			node *temp = new node;
			temp = head;
			while (temp != NULL)
			{
				temp = temp->next;
				count++;
			}
			return count;
		}
};

int main()
{
	List L;
	int size, value, pos, choose;
	double number;
	char check;
	cout << "Enter size of list: ";
	cin >> size;
	
	for (int i = 1; i <= size; i++)
	{
		cout <<"Node " <<i<<": ";
		cin >> value;
		L.CreateNode(value);
	}	
	L.display();
	cout <<endl;
	
	while (check != 'Y')
	{
		
	cout << "Do you want to Insert first (1), Insert last (2), Insert Position (3)"<<endl;
	cout << "               Delete first (4), Delete last (5), Delete Position (6), Exit (0)" <<endl;  
	cin >> choose;
	
	
		switch(choose)
	{
		case 0:
			check = 'Y';
			break;
		case 1:
			cout <<"Enter number you want to add at the star: ";
			cin >> number;
			L.insertFirst(number);
			L.display();
			break;
		case 2:
			cout <<"Enter number you want to add at the end: ";
			cin >> number;
			L.insertLast(number);
			L.display();
			break;
		case 3:
			cout <<"Enter position: ";
			cin >> pos;
			if ((pos <= (L.getSize()+1)) && pos > 0)
			{
				cout <<"Enter number you want to add: ";
				cin >> number;
				L.insertPosition(pos, number);
			}
			else
				cout <<"Over Load"<<endl;
			L.display();
			break;
		case 4:
			if (L.getSize() != 0)
			{
				L.deleteFirst();
				L.display();
			}
			else
				cout <<"List NULL"<<endl;
			break;
		case 5:
			if (L.getSize() != 0)
			{
				L.deleteLast();
				L.display();
			}
			else
				cout <<"List NULL"<<endl;
			break;
		case 6:
			if (L.getSize() != 0)
			{
				cout <<"Enter position: ";
				cin >> pos;
				if ((pos <= L.getSize()) && pos > 0)
				{
					L.deletePosition(pos);
				}
				else 
					cout <<"Over load"<<endl;
			L.display();
			}
			else
			cout <<"List NULL"<<endl;
			
			break;
	}
	}
	
}
