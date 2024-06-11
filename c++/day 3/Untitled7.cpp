#include<iostream>
using namespace std;
float cricleArea(int r){
	return 3.14*r*r;
}
main()
{
	int rn,area;
	cout<<"Enter Your Radius : ";
	cin>>rn;
	area=3.14*rn*rn;
	cout<<"The Area of Circle is :"<<area;
}
