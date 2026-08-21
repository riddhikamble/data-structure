#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;

void insertBeginning(int value)
{
	Node *newNode = new Node;
	
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void display()
{
	Node *temp = head;
	
	while(temp != NULL)
	{
		cout<<temp->data <<"->";
		temp = temp->next;
	}
	
	cout<<"NULL";
}

int main()
{
	insertBeginning(30);
	insertBeginning(20);
	insertBeginning(10);
	
	display();
	
	return 0;
}
