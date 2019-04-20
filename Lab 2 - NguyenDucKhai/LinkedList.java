package lab2_1;

import java.util.Scanner;

public class LinkedList {

	static class node
	{
		int data;
		node next;
	}
	
	private node head, tail;
	
	public LinkedList()
	{
		head = null;
		tail = null;
	}
	
	public void createNode(int value)
	{
		node temp = new node();
		temp.data = value;
		temp.next = null;
		
		if (head == null)
		{
			head = temp;
			tail = temp;
			temp = null;
		}
		else
		{
			tail.next = temp;
			tail = temp;
		}
	}
	
	public void insertFirst(int value)
	{
		node temp = new node();
		temp.data = value;
		temp.next = head;
		head = temp;
	}
	
	public void insertLast(int value)
	{
		node temp = new node();
		temp.data = value;
		temp.next = null;
		
		tail.next = temp;
		tail = temp;
	}
	
	public void insertPosition(int pos, int value)
	{
		node temp = new node();
		node cur = new node();
		node pre = new node();
		
		cur = head;
		for(int i = 1; i < pos; i ++)
		{
			pre = cur;
			cur = cur.next;
		}
		temp.data = value;
		pre.next = temp;
		temp.next = cur;
	}
	
	public void deleteFirst()
	{
		node temp = new node();
		temp = head;
		head = head.next;
	}
	
	public void deleteLast()
	{
		node temp = new node();
		node cur = new node();
		node pre = new node();
		
		cur = head;
		while (cur.next != null)
		{
			pre = cur;
			cur = cur.next;
		}
		tail = pre;
		pre.next = null;

	}
	
	public void deletePosition(int pos)
	{
		node cur = new node();
		node pre = new node();
		
		cur = head;
		for (int i = 1; i < pos; i++ )
		{
			pre = cur;
			cur = cur.next;
		}
		pre.next = cur.next;
	}
	
	public int getSize()
	{
		node temp = new node();
		int count = 0;
		while (temp != null)
		{
			count++;
			temp = temp.next;
		}
		return count;
	}
	
	public void display()
	{
		node temp = new node();
		temp = head;
		while (temp != null)
		{
			System.out.println(temp.data + " ");
			temp = temp.next;
		}
		System.out.println();
	}

public static void main(String[] arg)
{
	int n;
	LinkedList L = new LinkedList();
	
	Scanner keyboard = new Scanner(System.in);
	System.out.println("Enter number value you want to add: ");
	n = keyboard.nextInt();
	
	for (int i = 0; i < n; i++)
	{
		int value;
		System.out.println("Enter value " + (i+1) + " : ");
		value = keyboard.nextInt();
		L.createNode(value);
	}
	L.display();
	


	L.insertPosition(2, 10);
	L.insertFirst(5);
	L.insertLast(7);
	L.display();
	
	L.deletePosition(3);
	
	//L.deleteFirst();
	//L.display();
	
	L.deleteLast();
	L.display();
	
}

}


