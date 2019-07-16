#include <bits/stdc++.h>
#include <stack>
using namespace std;


int main(int argc, char const *argv[])
{
	stack <int> st;
	cout<<st.empty()<<endl;
	st.push(100);
	cout<<st.top()<<endl;
	st.push(200);
	cout<<st.top()<<endl;

	st.push(300);
	cout<<st.top()<<endl;

	st.push(400);
	cout<<st.top()<<endl;

	st.push(500);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	cout<<st.empty();
	return 0;
}