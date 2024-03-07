// Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.


#include<bits/stdc++.h>
using namespace std;

bool check(int a)
{
    return ( abs(a - 100) <=10 ) || ( abs(a-200) <= 10) ;
}

int main ()
{
    int t; 
    cout << "Enter the number: ";
    cin >> t;
    if (check(t))
        cout << "True, it is within 10 of 100 or 200." << endl;
    else    
        cout << "False, it is within 10 of 100 or 200." << endl;
    return 0;
}