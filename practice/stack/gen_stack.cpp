#include <bits/stdc++.h>
using namespace std;
int N=5;

template <typename T>
class Stack
{
	T *arr;
	int top;
public:
	Stack()
	{
		top=0;
		arr = new T[N];
	}

void push(T data)
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
	Stack <string> st;
	st.push("abc");
	st.push("bcd");
	st.push("efg");
	st.push("ijk");
	st.push("l");

	st.pop();
	st.pop();
	return 0;
}