// A Simple Iterative C++ program to reverse 
// a string 
/*
Time complexity : O(n)
Auxiliary Space : O(1)
*/

#include <bits/stdc++.h> 
using namespace std; 

// Function to reverse a string 
void reverseStr(string& str) 
{ 
	int n = str.length(); 

	// Swap character starting from two 
	// corners 
	for (int i = 0; i < n / 2; i++) 
		swap(str[i], str[n - i - 1]); 
} 

// Driver program 
int main() 
{ 
	string str = "ABCDE"; 
	reverseStr(str); 
	cout << str; 
	return 0; 
} 
