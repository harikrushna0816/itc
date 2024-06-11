#include<iostream>
using namespace std;

class student {
	public:
		string name;
		int age;
		int std;
};

int main() {
	char choice;

	for (;;) { 
		student s; 
		cout << "please enter your name:";
		cin >> s.name;
		cout << "please enter your std :";
		cin >> s.std;
		cout << "please enter your age :";
		cin >> s.age;
		cout << "Name: " << s.name << endl;
		cout << "Age: " << s.age << endl;
		cout << "Standard: " << s.std << endl;
		cout << "Do you want to continue? (Y/N): ";
		cin >> choice;
		if (choice != 'Y' && choice != 'y') 
			break;
	}

	return 0; 
}

