#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string num;
	
	cout << "Enter a number to check if it's palindrome:";
	cin >> num;
	
	int l = num.length();
	
	string rev = "";
	for (int i = (l-1); i >= 0; i--) {
	    rev += num[i];
	}
	cout << rev << "\n";
	
	if (num == rev) {
	    cout << "Yes, it's palindrome";
	} else {
	    cout << "No, it's not palindrome";
	}
	
	
	return 0;
}

