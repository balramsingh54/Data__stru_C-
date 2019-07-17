#include <bits/stdc++.h>
#include <stack>
using namespace std;

int stockspan(int arr[], int n)
{
	stack<int>st;
	int cur_value=100;
	while(st.empty())
	{
		if (cur_value<arr[0])
		{
			st.pop();
		}
		else
		{
			st.push(arr[0]);
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[7]={100,50,40,60,30,10,90};
	int n=7;
	stockspan(arr, n);
	return 0;
}