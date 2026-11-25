#include <iostream>
using namespace std;

class Student {
public:     
    Student() { 
        cout << "Constructor called: Student object created." << endl;     
    } 
    ~Student() { 
        cout << "Destructor called: Student object destroyed." << endl;     
    }    
    void display() {         
        cout << "This is a Student class method." << endl; 
    } 
};

int main() {     
    cout << "Entering main function..." << endl;     
    Student s1;       
    s1.display();    
    cout << "Exiting main function..." << endl;     
    return 0; 
}
