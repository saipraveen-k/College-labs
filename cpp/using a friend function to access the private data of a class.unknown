#include <iostream> 
using namespace std; 
class Student { 
    private: 
    int marks; 
    public: 
    Student(int m) { 
        marks = m; 
} 
friend void displayMarks(Student s); 
}; 
void displayMarks(Student s) { 
    cout << "Student marks: " << s.marks << endl; 
} 
int main() { 
    int s; 
    cout << "enter marks: "; 
    cin >> s; 
    Student stud(s); 
    displayMarks(stud); 
    return 0; 
} 
