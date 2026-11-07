#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5][5],find[5][5];
	int p=0,q=0,cnt=0;
	for(int i=0;i<5;i++){
	    for(int j=0;j<5;j++){
	        cin>>arr[i][j];
	        if(arr[i][j]==1) {
	            p=i;
	            q=j;
	        }
	    }
	}
	if(p==1||p==3) cnt++;
	else if(p==0||p==4) cnt+=2;
	if(q==0||q==4) cnt+=2;
	else if(q==1||q==3) cnt++;

	cout<<cnt<<endl;

}

