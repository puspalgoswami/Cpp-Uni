#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  char operation;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";  
  cin >> num2;

  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;
  switch (operation) {
    case '+':
      cout << "Result: " << num1 + num2 << endl;
      break;
    case '-':
      cout << "Result: " << num1 - num2 << endl;
      break;
    case '*':
      cout << "Result: " << num1 * num2 << endl;
      break;
    case '/':
      cout << "Result: " << num1 / num2 << endl;
      break; 
    default:
      cout << "Invalid input" << endl;
  }
  return 0;
}