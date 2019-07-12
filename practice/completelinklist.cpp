#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data=d;
		next=NULL;
	}

};

void insertathead(node*&head, int data)
{
	node* n = new node(data);
	n->next= head;
	head=n;
}

void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}


void insertattail(node*&head, int data)
{
	if (head==NULL)
	{
		insertathead(head, data);
		return;
	}
	node* temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node* n = new node(data);
	temp->next=n;
}

int len(node*head)
{
	node*temp=head;
	int count=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	return count;
}

void insertatposition(node* &head, int value, int position)
{
	if (head==NULL)
	{
		insertathead(head,data);
	}
	if (position>len)
	{
		insertattail(head, data);
	}

	count=1;
	node* temp= head;
	while(count<position-1)
	{
		temp=temp->next;
		count++;
	}

	node* n = new node(data);
	n->next=temp->next;
	temp->=n;
}

void delete_head(node*head)
{
	node*temp= head;
	head = head->head;
	delete head;
}

void delete_at_end(node*head)
{

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
	cout<<endl;
	insertattail(head,6);
	display(head);
	return 0;
}