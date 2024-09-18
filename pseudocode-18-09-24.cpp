/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    // std::cout<<"Hello World";
    // std::cin >> n;
    // int* n;
    vector<int> huys { 1, 2, 3, 4, 5, 6 };
    
    cin >> n;
    huys.push_back(n);
    auto iter = huys.cbegin();
    cin >> n;
    huys.emplace(iter + 2, n);
    int first = huys.front();    // 1
    int last = huys.back();     // 6
    int third = huys[2];        // 3
    cout << "first: " << first << endl;
    cout << "third: " << third << endl;
    cout << "last: " << last << endl;

    return 0;
}
