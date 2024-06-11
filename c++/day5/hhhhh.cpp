#include<iostream>
using namespace std;

class student {
	public:
		string name;
		int age;
		int std;
};

int main() {
	int numPrints;
	cout << "How many times do you want to print student details? ";
	cin >> numPrints;

	for (int i = 0; i < numPrints; ++i) { 
		student s; 
		cout << "Please enter your name: ";
		cin >> s.name;
		cout << "Please enter your std: ";
		cin >> s.std;
		cout << "Please enter your age: ";
		cin >> s.age;

	
		cout << "Name: " << s.name << endl;
		cout << "Age: " << s.age << endl;
		cout << "Standard: " << s.std << endl;
	}

	return 0;
}

