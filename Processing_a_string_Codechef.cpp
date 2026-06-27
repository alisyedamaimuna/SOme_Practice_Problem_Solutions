#include <bits/stdc++.h>
using namespace std;

int fetchsum(string str){

    int sum = 0;

    for(int i = 0; i < str.length(); i++) {

        if(isdigit(str[i])) {
            sum += str[i] - '0';
        }
    }

    return sum;
}

int main() {

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {

        string str;
        cin >> str;

        cout << fetchsum(str) << endl;
    }
}
