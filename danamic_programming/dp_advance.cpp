#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

// int dp[5][4];
// int lcs(string s1, string s2)
// {
// 	int count=0;

// 	if (s1.length() or s2.length()==0)
// 	{
// 		return 0;
// 	}
// 	if (dp[s1.length()][s2.length()]!=0)
// 	{
// 		return dp[s1.length()][s2.length()];
// 	}
// 	char ch1=s1[0];
// 	string ros1=s1.substr(1);
// 	char ch2=s2[0];
// 	string ros2=s2.substr(1);
// 	if (ch1==ch2)
// 	{
// 		count =1+lcs(ros1,ros2);
// 	}
// 	else
// 	{  
// 		int first= lcs(ros1,s2);
// 		int second= lcs(s1,ros2);
// 		count =max(first,second);
// 	}
// 	dp[s1.length()][s2.length()]=count;
// 	return dp[s1.length()][s2.length()];

// }

int k=2;
int lcs_change(string str1, string str2)
{   
	char ch1= str1[0];
	char ch2= str2[0];
	if (ch1==ch2)
	{
		/* code */
	}
	if (ch1!=ch2)
	{
		ch1[0]=ch2[0];
		k=k-1;
	}
}

int main(int argc, char const *argv[])
{
	// string str1="abcde";
	// string str2="acge";
	// cout<<lcs(str1, str2)<<endl;
	return 0;
}