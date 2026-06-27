#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	cin>>a;
	cin>>b;
	string cn = a+b;

	cout<<a.length()<<" "<<b.length()<<endl<<cn<<endl;
	swap(a[0],b[0]);
	cout<<a<<" "<<b;
	return 0;
}
