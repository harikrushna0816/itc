#include<iostream>
using namespace std;
main(){
	int no,s1,s2,s3,s4;
	string name;
	cout<<"Enter Your Name :";
	cin>>name;
	cout<<"\nEnter Your Roll Number :";
	cin>>no;
	cout<<"\nEnter Your Physics Marks :";
	cin>>s1;
	cout<<"\nEnter Your Maths Marks :";
	cin>>s2;
	cout<<"\nEnter Your Chemistry Marks :";
	cin>>s3;
	cout<<"\nEnter Your Computer Marks :";
	cin>>s4;
	
	cout<<"=======================================";
	cout<<"\nYour Name is :"<<name;
	cout<<"\nYour Roll Number is :"<<no;
	cout<<"\n========================================";
	cout<<" \n\t\t\tSubjects      Marks";
	cout<<" \n\t\t\tPhysics       "<<s1;
	cout<<" \n\t\t\tMaths         "<<s2;
	cout<<" \n\t\t\tChemistry     "<<s3;
	cout<<" \n\t\t\tComputer      "<<s4;
	
}
