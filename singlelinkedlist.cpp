#include<iostream>
using namespace std;

struct Node
{ 
  int data;
  Node *next;
};

int main()
{
	Node *head = NULL, *temp = NULL, *newNode;
	
	int n, value;
	
	cout<<"enter the number of nodes:";
	cin>>n; 
	
	for(int i=0; i<n; i++)
	{  
	   newNode = new Node();
	   cout<<"enter data:";
	   cin>>value;
	   newNode->data=value;
	   newNode->next=NULL;
	   
	   if(head==NULL)
	   {
	   	  head = newNode;
	   	  temp = head;
	   }
	   else
	   {
	   	temp->next=newNode;
	   	temp=newNode;
	   }
	   
	}
	
	   cout<<"linked list:";
	   temp=head;
	   while(temp!=NULL)
	   {
	   	 cout<<temp->data<<"->";
	   	 temp=temp->next;
	   }
	   
	   cout<<"NULL"<<endl;
	   return 0;
}
