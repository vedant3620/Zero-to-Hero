#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int a=5, b=2;
    cout << gcd(a, b);
    return 0;
}