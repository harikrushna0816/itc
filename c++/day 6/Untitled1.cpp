#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		void takeValue(){
		cout<<"please enter your name :";
		cin>>name;
		cout<<"please enter your age :";
		cin>>age;
		}
		void showValue(){
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
		}  
};
int main(){
	student s1,s2;
	s1.takeValue();
	s2.takeValue();
	  
	  s1.showValue();
	  s2.showValue();
} 
