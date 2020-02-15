// C++ program to reverse a string using stack 
/*
Time complexity : O(n)
Auxiliary Space : O(n)
*/

#include <bits/stdc++.h> 
using namespace std; 
  
void reverse(string& str)
{
    stack<char> ch;
    for(unsigned int i = 0; i< str.length(); i++)
        ch.push(str[i]);
        
    for(unsigned int i=0; i<str.length(); i++)
    {
        str[i] = ch.top();
        ch.pop();
    }
}

int main()
{
    string name = "ABCD";
    reverse(name);
    
    cout<<"name: "<<name<<endl;
}