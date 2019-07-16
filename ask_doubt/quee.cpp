#include <bits/stdc++.h>
using namespace std;

class Quee
{
	int front;
	int rear;
	int *arr;
	int curr_size;
	int max_size;
public:
	Quee(int d_size=5)
	{
		front=0;
		rear=max_size-1;
		arr= new int[max_size];
		curr_size=0;
		max_size=d_size;
	}

bool isfull()
{
	if (curr_size==max_size)
	{
		return true;
	}
	return false;
}

bool isempty()
{
	if (curr_size==max_size)
	{
		return true;
	}
	return false;
}

void push(int data)
{
	if (isfull())
	{
		cout<< "quee is already full. "<<endl;
		return; 
	}
	// q.push(data);
	rear=(rear+1)%max_size;
	arr[rear]=data;
	curr_size++;

}

void pop()
{
	if (isempty())
	{
		 cout<<"quee is empty : "<<endl;
	}
	arr[front]=0;
	front=(front+1)%max_size;
	curr_size--;
}

};


int main(int argc, char const *argv[])
{
	Quee q(5);
	cout<<q.isfull()<<endl;
	q.push(100);
	q.push(200);
	q.push(300);
	q.push(400);
	q.push(500);
	// q.push(600);
	cout<<q.isfull()<<endl;
	cout<<q.isempty()<<endl;
	cout<<q.isfull()<<endl;
	return 0;
}