#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
//upper side
for(int i = 0 ; i<n ; i++){
        for(int j=0;j<i+1;j++){//left side
    cout<<"*";
        }
        for(int s=0 ;s <2*(n - i - 1) ; s++)//space handles
        {
            cout<<" ";
        }
        for(int k = 0;k<i+1;k++){//right side
            cout<<"*";
        }
        cout<<endl;
}
//downside
for(int i = 0 ; i<n ; i++){
        for(int j=0;j<n-i;j++){//left side
    cout<<"*";
        }
        for(int s=0 ;s < 2*i; s++)//space handling
        {
            cout<<" ";
        }
        for(int k = 0;k<n-i;k++){//right side
            cout<<"*";
        }
        cout<<endl;
}
}
