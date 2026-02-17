#include<iostream>
using namespace std;
int decBinary(int decNum){
int ans = 0, pow = 1;//Pow = 10^0
while(decNum > 0){#
    int rem = decNum % 2;
    decNum/=2;
    ans+=(rem*pow);
    pow*=10;
}
return ans;
}
int main(){
int decNum = 50;
cout<<decBinary(decNum)<<endl;
return 0;
}
