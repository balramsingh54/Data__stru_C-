#include <bits/stdc++.h>
using namespace std;

int money_count(int arr[], int  money)
{
	int count=0;
	while(money>0)
	{
		for (int i = 0; i < 10; i++)
		{
			if (money<arr[i-1])
			{
				money=money-arr[i-1];
			}
			if (i==10)
			{
				money=money-arr[i-1];
				count++;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int arr[10]={1,2,5,10,20,50,100,200,500,2000};
	int money=773;

	return 0;
}