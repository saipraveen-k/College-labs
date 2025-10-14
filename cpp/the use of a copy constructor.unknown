#include <iostream> 
using namespace std; 
class Student { 
    private:     
    int id;     
    string name; 
    public: 
    Student(int i, string n) {         
        id = i;         
        name = n;         
        cout << "Parameterized constructor called." << endl; 
    } 
    Student(const Student &s) {         
        id = s.id;         
        name = s.name;         
        cout << "Copy constructor called." << endl;     
    }     
    void display() {         
        cout << "ID: " << id << ", Name: " << name << endl; 
    } }; 
    int main() { 
        Student s1(51, "Sravya");      
        Student s2 = s1;                 
        cout << "\nStudent 1 Info: ";     
        s1.display();     
        cout << "Student 2 Info (copied from s1): ";     
        s2.display();     
        return 0; 
}
