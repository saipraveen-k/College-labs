#include <iostream>
using namespace std; 
class Student {
    private:     
    int id;     
    string name; 
    public:     
    Student() {         
        id = 0;         
        name = "Unknown";         
        cout << "Default constructor called." << endl; 
    } 
    Student(int i) {        
        id = i;
        name = "Unknown";
        cout << "Constructor with 1 parameter called." << endl; 
    } 
    Student(int i, string n) {
        id = i;
        name = n; 
        cout << "Constructor with 2 parameters called." << endl;
    }      
    void display() {         
        cout << "ID: " << id << ", Name: " << name << endl; 
    } };  
    int main() { 
        Student s1;                    
        Student s2(101);
        Student s3(51, "Sravya");     
        cout << endl << "Student Info:" << endl;     
        s1.display();     
        s2.display();     
        s3.display(); 
        return 0; 
} 
