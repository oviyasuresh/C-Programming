package JUNE;

import java.util.Scanner;

class Node
{
	Node next;
	int data;
	Node()
	{
	}
	public Node(int m)
	{
		data=m;
		Node next=null;
		Node head=null;
	}
	
	public void reverse(Node ptr1)
	{
		if(ptr1==null)
			return;
		reverse(ptr1.next);
		
		System.out.print(ptr1.data+"->");
		
		
	}
	
}
		
	
	

public class hunter26
{

	public static void main(String[] args)
	{
		Node head=null,ptr=null,newnode;
	Scanner scan=new Scanner(System.in);
	int n=scan.nextInt();
	for(int i=0;i<n;i++)
	{
		int n1=scan.nextInt();
		newnode=new Node(n1);
		if(head==null)
		{
			
			head=newnode;
			ptr=head;
		}
		else
		{
			ptr.next=newnode;
		     ptr=newnode;
			
		}
	
	}
	Node x=new Node();
	x.reverse(head);
	

	}

}
