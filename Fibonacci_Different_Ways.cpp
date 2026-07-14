#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int fibDpmem(int n,vector<int>&f){
    if(n<=1) return n;
    if(f[n]!=-1) return f[n];
    return f[n]=fibDpmem(n-1,f)+fibDpmem(n-2,f);
}

int fibDptab(int n){
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main() {

	int n;
    vector<int>f(n+1,-1);
	cin>>n;
	cout<<fibDptab(n)<<endl;

}

