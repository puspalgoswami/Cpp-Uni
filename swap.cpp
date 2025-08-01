#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int a, b, temp;
	
	cout << "Enter num1:";
	cin >> a;
	
	cout << "Enter num2:";
	cin >> b;
	
	cout << "Num1 = " << a << ", Num2 = " << b << "\n";
	
	cout << "Applying swap code \n";
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "Num1 = " << a << ", Num2 =" << b << "\n";
	
	return 0;
}