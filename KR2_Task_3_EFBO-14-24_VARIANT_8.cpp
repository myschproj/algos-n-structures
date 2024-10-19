#include<iostream>
#include<math.h>
using namespace std;

int bignum(int i, int u) {
    if (i>u) return i; else return u;
}

int main() {
    cout << "Введите два числа ";
    int a, b;
    cin >> a;
    cin >> b;
    bignum(a, b);
    cout << "Большее число равно " << bignum(a, b) << endl;
    return 0;
}
