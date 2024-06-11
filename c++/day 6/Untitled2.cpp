#include<iostream>
using namespace std;
class student {
public:
    string name;
    int age;
    void takeValue() {
        cout << "Please enter your name: ";
        cin >> name;
        cout << "Please enter your age: ";
        cin >> age;
    }
    void showValue() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }  
};
int main() {
    const int numStudents = 2; 
    student students[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << (i + 1) << ":\n";
        students[i].takeValue();
    }
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nDetails of student " << (i + 1) << ":\n";
        students[i].showValue(); 
    }
    return 0;
}


