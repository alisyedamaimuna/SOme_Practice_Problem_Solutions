#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    string str;
	    int sum=0;
	    int num;
	    cin>>num;
	    stringstream ss;
	    ss<<num;
	    ss>>str;
	    for(int i=0;i<str.length();i++){
	        sum+=(str[i]-'0');
	    }
	    cout<<sum<<endl;
	}
 return 0;
}

