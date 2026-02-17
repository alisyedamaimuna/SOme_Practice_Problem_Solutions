#include <iostream>
#include <string>
using namespace std;

// Decimal to Binary
long long decBinary(int decNum) { // convert from decimal to binary
    long long ans = 0, pow = 1;
    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

// Decimal to Octal
int decOct(int decNum) { // convert from decimal to octal
    int ans = 0, pow = 1;
    while (decNum > 0) {
        int rem = decNum % 8;
        decNum /= 8;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

// Decimal to Hexadecimal
string decHex(int decNum) { // convert from decimal to hexadecimal
    string ans = "";
    while (decNum > 0) {
        int rem = decNum % 16;
        if (rem < 10)
            ans = char(rem + '0') + ans;
        else
            ans = char(rem - 10 + 'A') + ans;
        decNum /= 16;
    }
    return ans;
}

// Binary to Decimal
int binTODecimal(long long binNum) { // convert from binary to decimal
    int ans = 0, pow = 1;
    while (binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

// Binary to Octal
int binToOct(long long binNum) { // convert from binary to octal
    int dec = binTODecimal(binNum);
    int oct = 0, pow = 1;
    while (dec > 0) {
        oct += (dec % 8) * pow;
        dec /= 8;
        pow *= 10;
    }
    return oct;
}

// Binary to Hexadecimal
string binToHex(long long binNum) { // convert from binary to hexadecimal
    int dec = binTODecimal(binNum);
    string hex = "";
    while (dec > 0) {
        int rem = dec % 16;
        if (rem < 10)
            hex = char(rem + '0') + hex;
        else
            hex = char(rem - 10 + 'A') + hex;
        dec /= 16;
    }
    return hex;
}

// Octal to Binary
long long octToBin(int oct) { // convert from octal to binary
    int dec = 0, base = 1;
    while (oct > 0) {
        dec += (oct % 10) * base;
        base *= 8;
        oct /= 10;
    }
    return decBinary(dec);
}

// Octal to Hexadecimal
string octToHex(int oct) { // convert from octal to hexadecimal
    long long bin = octToBin(oct);
    return binToHex(bin);
}

// Hexadecimal to Binary
string hexToBin(string hex) { // convert from hexadecimal to binary
    string bin = "";
    for (char c : hex) {
        int val = isdigit(c) ? c - '0' : c - 'A' + 10;
        string temp = "";
        for (int i = 0; i < 4; i++) {
            temp = char((val % 2) + '0') + temp;
            val /= 2;
        }
        bin += temp;
    }
    return bin;
}

// Hexadecimal to Octal
int hexToOct(string hex) { // convert from hexadecimal to octal
    string bin = hexToBin(hex);
    long long binNum = stoll(bin);
    return binToOct(binNum);
}

// Main function (menu-driven)
int main() {
    int choice;
    cout << "Choose Conversion:\n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Decimal to Octal\n";
    cout << "3. Decimal to Hexadecimal\n";
    cout << "4. Binary to Decimal\n";
    cout << "5. Octal to Binary\n";
    cout << "6. Binary to Octal\n";
    cout << "7. Binary to Hexadecimal\n";
    cout << "8. Octal to Hexadecimal\n";
    cout << "9. Hexadecimal to Binary\n";
    cout << "10. Hexadecimal to Octal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int n; cout << "Enter decimal number: "; cin >> n;
            cout << "Answer: " << decBinary(n) << endl;
            break;
        }
        case 2: {
            int n; cout << "Enter decimal number: "; cin >> n;
            cout << "Answer: " << decOct(n) << endl;
            break;
        }
        case 3: {
            int n; cout << "Enter decimal number: "; cin >> n;
            cout << "Answer: " << decHex(n) << endl;
            break;
        }
        case 4: {
            long long n; cout << "Enter binary number: "; cin >> n;
            cout << "Answer: " << binTODecimal(n) << endl;
            break;
        }
        case 5: {
            int n; cout << "Enter octal number: "; cin >> n;
            cout << "Answer: " << octToBin(n) << endl;
            break;
        }
        case 6: {
            long long n; cout << "Enter binary number: "; cin >> n;
            cout << "Answer: " << binToOct(n) << endl;
            break;
        }
        case 7: {
            long long n; cout << "Enter binary number: "; cin >> n;
            cout << "Answer: " << binToHex(n) << endl;
            break;
        }
        case 8: {
            int n; cout << "Enter octal number: "; cin >> n;
            cout << "Answer: " << octToHex(n) << endl;
            break;
        }
        case 9: {
            string n; cout << "Enter hexadecimal number: "; cin >> n;
            cout << "Answer: " << hexToBin(n) << endl;
            break;
        }
        case 10: {
            string n; cout << "Enter hexadecimal number: "; cin >> n;
            cout << "Answer: " << hexToOct(n) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
