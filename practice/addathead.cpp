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

// void len(node*head)
// {

// }

// void insertatposition(node*&head, int data, int position)
// {
// 	node*temp=head;
// 	node *n = new node(data)
// 	len=0;
// 	while(len==position-1)
// 	n->next=temp->next;
// 	temp->next=n;
// }
void display(node*head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

// void deleteatend(node*head)
// {
// 	if (head==NULL)
// 	{
// 		return;
// 	}
// 	node*temp=head;
// 	node*previous=NULL;
// 	while(temp!=NULL)
// 	{

    
// 	}
// }
//  iterative
bool search(node*head,int value)
{
	node*temp=head;
	while(temp!=NULL)
	{
		if (value==temp->data)
			{
				return true;
			}
			temp=temp->next;
	}
	return false;
}

// bool search_recursive(node*head, int value)
// {
// 	node*temp=head;
// 	if (temp->data!=value)
// 	{
// 		return false;
// 	}
// 	return
// 		search_recursive(temp->data, value);
// }
node* middle(node*head)
{
	node*slow=head;
	node*fast=head;
	while(fast!=NULL&& fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;

}

// void reverse_Iterative(node*&head)
// {
// 	node* pre=NULL;
// 	node* cur= head;
// 	while()

// }
// void iterative_recursive(node* head)
// {

// }

node* merge(node*a, node*b)
{
	if (a==NULL)
	{
		return b;
	}
	if (b==NULL)
	{
		return b;
	}
	node*c =NULL;
	if (a->data<b->data)
	{
		c=a;
		c->next= merge(a->next,b);
	}
	else
	{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}

int main(int argc, char const *argv[])
{
	node*head= NULL;
	insertathead(head,7);
	insertathead(head,6);
	insertathead(head,5);	
	insertathead(head,4);	
	insertathead(head,3);	
	insertathead(head,2);
	insertathead(head,1);

	search(head,3);
	display(head);
	cout<<endl;
	cout<<search(head,3);
	cout<<endl;
	// cout<<search_recursive(head,3);
	node* mid=middle(head);
	cout<<mid->data<<endl;
	cout<<mid->next<<endl;
	cout<<merge(head,head);
	return 0;
}