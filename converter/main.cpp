#include <iostream>
#include <cmath> //mathematical operations

using namespace std;

int convert(long long);

int main() {
    long long a;
    cout << "Enter binary: ";
    cin >> a;
    cout << a << " = " << convert(a) << " decimal";
    return 0;
}

int convert(long long a){ //Function converter
    int dec = 0,  i = 0, rem;

    while (a!=0){
        rem = a % 10;
        a /= 10;
        dec += rem * pow(2, i);
    }
    return dec;
}

