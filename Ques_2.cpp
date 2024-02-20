//  Write a C++ program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.    

#include<bits/stdc++.h>
using namespace std;

int check(int x)
{
	return x > 51 ? (x-51) * 3 : 51-x ;
}

int main()
{
	int x = 0;
	int t = 3;
	while(t-- > 0)
	{
		cout << "Enter the number " << endl ;
		cin >> x;
		if(x > 51){
			cout << "Three times the difference from 51: ";
		}
		else {
			cout << "Difference from 51: ";
		}
		cout << check(x) << endl;
	}
}