#include<iostream> 
using namespace std; 
void callbyvalue(int a, int b) { 
a = a + 10; b = b + 20; 
cout << "Inside callbyvalue - a:" << a << ", b:" << b << endl; 
} 
void callbyreference(int &a, int &b) { 
a = a + 10; b = b + 20; 
cout << "Inside callbyreference - a:" << a << ", b:" << b << endl; 
} 
int main() { 
int x = 5, y = 10; 
cout << "Original values - x:" << x << ", y:" << y << endl; 
callbyvalue(x, y); 
cout << "After callbyvalue - x:" << x << ", y:" << y << endl; 
callbyreference(x, y); 
cout << "After callbyreference - x:" << x << ", y:" << y << endl; 
return 0; 
} 
