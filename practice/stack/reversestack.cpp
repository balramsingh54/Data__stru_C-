#include <bits/stdc++.h>
#include <stack>
using namespace std;

void transfer(stack<int>&st, stack<int>&st1, int num)
{
	for (int i = 0; i <num ; i++)
	{
		st1.push(st.pop());
		st.pop();
	}
}

int main(int argc, char const *argv[])
{
	stack <int> st;
	cout<<st.empty();
	st.push(100);
	st.push(200);
	st.push(300);
	st.push(400);
	st.push(500);
	
	return 0;
}

