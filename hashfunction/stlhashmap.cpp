#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
	// unordered_map<string, int>m;
	// m["mango"]=200;
	// pair<string, int>foo("grapes",100);
	// m.insert(foo);

	unordered_map<int, int>m;
	int arr[9]={1,2,3,-1,4,-5,-3,4,6};
	for (int i = 0; i <9 ; i++)
	{
		m[arr[i]];
	}
	int count_pair=0;
	for (int i = 0; i < 9; i++)
	{
		for (auto it:m)
		{
			if (arr[i]+value==0)
			{
				count_pair++;
			}
		}
	}

	return 0;
}