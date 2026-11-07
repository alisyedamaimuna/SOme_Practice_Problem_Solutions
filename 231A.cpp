#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,cnt=0;
	cin>>n;
	vector<int> v(3);
	for(int i=0;i<n;i++){
	    int p=0;
	    for(int j=0;j<3;j++){
	        cin>>v[j];
	        p+=v[j];
	    }
	    if(p>=2) cnt++;

	}
	cout<<cnt<<endl;


}

