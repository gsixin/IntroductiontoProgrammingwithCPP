#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double fu=0,in=0,numy=0,rate=0;
	cout<<"Enter investment amount:";
	cin>> in;
	cout<<"Enter annual interest rate in percentage:";
	cin>>rate;
	cout<<"Enter number of years:";
	cin>>numy;
	fu=in*pow(1+rate*0.01/12,numy*12);
	cout<<"Accumulated value is $"<<fu;
	
}
