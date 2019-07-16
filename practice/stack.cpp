#include <bits/stdc++.h>
using namespace std;
int N=5;
class Stack
{
	int arr[5];
	int top;
public:
	Stack()
	{
		top=0;
	}

void push(int data)
{
	if (top==5)
	{
		cout<<"Stack is already full. "<<endl;
		return;
	}
	else
	{
		arr[top]=data;
		top++;
	}
}

void pop()
{
	if (top==0)
	{
		cout<<"stack is empty. "<<endl;
		return;
	}
	cout<<"top element is : "<<arr[top-1]<<endl;
	top--;
}
 bool isfull()
 {
 	if (top==N)
 	{
 		return true;
 	}
 	return false;
 }
 bool isempty()
 {
 	if (top==0)
 	{
 		return true;
 	}
 	return false;
 }


};



int main(int argc, char const *argv[])
{
	Stack st;
	st.push(100);
	st.push(200);
	st.push(300);
	st.push(400);
	st.push(500);
	st.push(600);

	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	return 0;
}