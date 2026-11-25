#include <iostream> 
using namespace std; 
 
inline int minValue(int a, int b) { 
return (a < b) ? a : b; 
} 
int main() { 
int x = 90, y = 82; 
cout << "The minimum value is: " << minValue(x, y) << endl; 
return 0; 
} 
