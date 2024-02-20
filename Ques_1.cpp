// Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum

#include<bits/stdc++.h>
using namespace std;

int Operator(int x, int y)
{
	return x == y ? (x+y) * 3 : x+y;
}

int main()
{
	int t = 3;
	while(t-- > 0)
	{
        int a, b;
		cout << "enter the numbers" << endl; 
		cin >> a; cin >> b;
		if(a == b){
			cout << "thrice the sum : " ; 
		}
		else{
			cout << "The sum is :" ;
		}
		cout << Operator(a, b) << endl;
	}
	return 0;
}