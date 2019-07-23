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

int min_operation_dp()

int main(int argc, char const *argv[])
{
	
	return 0;
}


