#include<iostream>
using namespace std;

int main(){
	double v1=0;
	double v0=0;
	double t=0;
	cout<<"Enter v0,v1 and t:";
	cin>>v0>>v1>>t;
	while(t<=0){
		cout<<"Time input wrong,please input time(t) again:";
		cin>>t;
	} 
	double a=(v1-v0)/t;
	cout<<"The average acceleration is "<<a;
} 
