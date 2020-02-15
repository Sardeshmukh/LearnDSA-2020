#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// Function to reverse a given character array using std::reverse
void reverse(char *str)
{
	std::reverse(str, str + strlen(str));
}

// main function
int main()
{
	/* using C string */
	char s[] = "Techie Delight";
	
	reverse(s);
	cout << "Reverse of the given string is : " << s;

	return 0;
}