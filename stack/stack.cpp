#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	stack<int> s;
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	x=s.pop();
	stack<int> p;
	while(!s.empty)
	{
		int x1=s.pop();
		p.push(x1);
	}

	return 0;
}