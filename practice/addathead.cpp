#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;

// constructor 

	node(int d)
	{
		data = d;
		next= NULL;
	}
};

void insertathead(node*&head, int data)
{
	node* n= new node(data);
	n->next=head;
	head= n;
}

void display(node*head)
{
	node*temp=head;
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
}


int main(int argc, char const *argv[])
{
	node*head= NULL;
	insertathead(head,5);	
	insertathead(head,4);	
	insertathead(head,3);	
	insertathead(head,2);
	insertathead(head,1);
	display(head);		
	return 0;
}