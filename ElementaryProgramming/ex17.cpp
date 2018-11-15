#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double ta=0;
	cout<<"Enter the temperature in Fahrenhet:";
	cin>>ta;
	cout<<"Enter the wind speed in miles per hour:";
	double v=0;
	cin>>v;
	double twc=35.74+0.6215*ta-35.75*pow(v,0.16)+0.4275*ta*pow(v,0.16);
	cout<<"The wild chilll index is :"<<twc; 
	
} 
