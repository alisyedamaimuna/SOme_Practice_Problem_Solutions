#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;

	cin>>s;
	int n=s.size();
    vector<char> arr;
    for(int i=0;i<s.size();i++){
        if(s[i]>='1'&&s[i]<='9') arr.push_back(s[i]);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++) {
        cout<< arr[i]<<"+";

}
cout<<arr[arr.size()-1]<<endl;

}
