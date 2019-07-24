#include <bits/stdc++.h>
using namespace std;
int min_operation(string str1, string str2)
{
	char ch1= str1[0];
	char ch2= str2[0];
	string ros1= str1.substr(1);
	string ros2=str2.substr(1);
	if (ch1==ch2)
	{
		min_operation(ros1, ros2);

	if (ch1!=ch2)
	{
		str1[0]=str2[0];
	int replacment=	1+ min_operation(str1, ros2);
	int deletion=	1+ min_operation(str1, str2);
	int insertiont=	1+ min_operation(ros1, str2);
	}

}

// local  dp 

int min_operation1(string str1, string str2)
{
	n= str1.length()+1;
	m= str2.length()+1;
	int dp[n][m];
	int 
	if (ch1==ch2)
	{
		min_operation(ros1, ros2);
	}
	for (int i = 0; i < str1.length(); i++)
	{
		for (int j = 0; i < s2.length(); j++)
		{
			if (i==0 or j==0)
			{
				dp[n][m]=i+j;
				continue;
			}
			if (str1[i-1]==str2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else 
			{
				dp[i][j]=max
			}
		}
	}


int min_operation_dp()

int main(int argc, char const *argv[])
{
	
	return 0;
}


