#include<iostream>
using namespace std;

int main(){
	cout<<"Enter speed and acceleration:";
	double v=0;
	double a=0;
	cin>>v>>a;
	double length=v*v/2/a;
	cout<<"The minimum runway length for this airplane is "<<length;
} 
