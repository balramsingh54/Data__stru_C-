#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int dp[100] = {0,1};

int fibonacci(int n){
	if(n==1 || n==0){
		return n;
	}

	int fn1 = fibonacci(n-1);
	int fn2 = fibonacci(n-2);

	int fn = fn1 + fn2;
	return fn;
}

int fib(int n){
	if(n==0 || n==1){
		return n;
	}

	if(dp[n]!=0){
		return dp[n];
	}

	int fn = fib(n-1) + fib(n-2);

	dp[n] = fn;

	return fn;
}

int fibonacci_DP(int n){
	int dp[n+1];

	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[n];
}

int main(){

	int n;
	cin>>n;

	cout<<fib(n)<<endl;
	cout<<"*******************"<<endl;
	cout<<fibonacci(n)<<endl;
	cout<<"********************"<<endl;
	cout<<fibonacci_DP(n)<<endl;
	return 0;
}