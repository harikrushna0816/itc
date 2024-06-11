#include<iostream>
using namespace std;
class student {
	public:
		string name;
		int age;
		int std;
};
main(){
	student s1;
	cout<<"please enter your name:";
	cin>>s1.name;
	cout<<"please enter your std :";
	cin>>s1.std;
	cout<<"please enter your age :";
	cin>>s1.age;
	student s2;
	cout<<"please enter your name:";
	cin>>s2.name;
	cout<<"please enter your std :";
	cin>>s2.std;
	cout<<"please enter your age :";
	cin>>s2.age;
	cout<<s1.name<<"  "<<s2.name<<endl;
	cout<<s1.age<<"   "<<s2.age<<endl;
	cout<<s1.std<<"   "<<s2.std<<endl;
}
