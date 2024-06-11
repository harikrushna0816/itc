#include<iostream>
using namespace std;

class student {
	public:
		string name;
		int age;
		int std;
};

int main() {
	char choice; // Variable to store user choice

	do {
		student s; // Declare a student object
		// Input student details
		cout << "please enter your name:";
		cin >> s.name;
		cout << "please enter your std :";
		cin >> s.std;
		cout << "please enter your age :";
		cin >> s.age;

		// Print student details
		cout << "Name: " << s.name << endl;
		cout << "Age: " << s.age << endl;
		cout << "Standard: " << s.std << endl;

		// Ask user if they want to continue
		cout << "Do you want to continue? (Y/N): ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y'); // Continue loop if user inputs 'Y' or 'y'

	return 0; // Indicate successful termination of the program
}


