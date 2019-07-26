#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[3], int val[3], int W)
{
	int dp[4][capacity+1];
	for (int i = 0; i < 4; i++)
	{
		for (int w = 0; w < capacity; w++)
		{
			if (i==0 || w==0)
			{
				dp[i][w]=0;
			}
			if (w<wt[i-1])
			{
				dp[i][w]-dp[i-1][w];
			}
			else if (/* condition */)
			{
				/* code */
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int wt[3]={1,2,3};
	int val[3]={30,50,60};
	int W = ;
	return 0;
}