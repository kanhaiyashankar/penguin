// Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.

#include <bits/stdc++.h>
using namespace std;

bool check_sum  (int a, int b) 
{
	return a == 30 || b == 30 || (a+b == 30) ;
}; 

int main ()
{
	int a = 0, b = 0;
	cout << "Enter Two Numbers: ";
	cin >> a >> b;
	if(check_sum == 0)
	{
		cout << "True";
	}
	else 
	{
		cout << "False";
	}

	return 0;
}