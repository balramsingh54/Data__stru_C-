#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	node* next;
	int data;


	// condtructor 
	node(int d)
	{
		data = d;
		next=NULL;
	}
};

void InsertAtHead(node*&head, int data)
{
	node* n= new node(data);
	n->next= head;
	head=n;
}

void display(node*head)
{
	node*temp=head;
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<endl;
}


int main(int argc, char const *argv[])
{
	node*head=NULL;
	InsertAtHead(head, 5);
	InsertAtHead(head, 4);
	InsertAtHead(head, 3);
	InsertAtHead(head, 2);
	InsertAtHead(head, 1);
	display(head);
	return 0;
}