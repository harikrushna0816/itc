#include<iostream>
using namespace std;
class Hari{
  public:
  	string name;
  	int salary;
  	void showInfo(){
  		cout<<"Name :"<<name<<endl;
  		cout<<"salary :"<<salary<<endl;}
	  };
	  class salarydistribute :public Hari{
	  	public:
	  		void takeVal(){
	  			cout<<"enter your name :";
	  			cin>>name;
	  			cout<<"enter your salary :";
	  			cin>>salary;
			  }
	  };
	  main(){
	  	salarydistribute s1;
	  	s1.takeVal();
	  	s1.showInfo();
	  }

