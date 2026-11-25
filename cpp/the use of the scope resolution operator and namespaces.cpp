#include <iostream> 
using namespace std; 
int value = 100; 
namespace FirstNamespace { 
int value = 10; 
void display() { 
cout << "Inside FirstNamespace, value = " << value << endl; 
} 
} 
namespace SecondNamespace { int value = 20; void display() { 
cout << "Inside SecondNamespace, value = " << value << endl; 
} } 
int main() { 
int value = 15; 
cout << "Local value = " << value << endl; 
cout << "Global value = " << ::value << endl; 
FirstNamespace::display(); 
SecondNamespace::display(); 
cout << "FirstNamespace::value = " << FirstNamespace::value << endl; 
cout << "SecondNamespace::value = " << SecondNamespace::value << endl; 
return 0; 
} 
