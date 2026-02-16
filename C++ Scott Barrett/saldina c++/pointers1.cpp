#include <iostream>
using namespace std;

int main(){
    int n = 5; 
    cout << n << endl;
    cout << &n << endl; // prints address of n
    int * ptr = &n; // ptr is storing the address of integer n
    cout << ptr << endl;
    cout << *ptr << endl; // prints value of the address that the ptr is storing i.e, 5
    *ptr = 10; // ptr is changing the value at address of integer n
    cout << *ptr << endl; // prints value of the address that the ptr is storing i.e, 10
    cout << n << endl;

    // int* ptr2; // error: is not holding any address
    // *ptr2 = 7;

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    
    cout << "v = " << *ptr2 << endl;
    cout << "v = " << v << endl;
    system("pause>0");
    return 0;
}