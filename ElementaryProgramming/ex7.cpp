#include<iostream>
using namespace std;

int main(){
	int days=0;
	int minutes=0;
	cout<<"Enter the number of minutes:";
	cin>>minutes;
	days=minutes/(60*24);
	int years=days/365;
	int leftDays=days%365;
	cout<<minutes<<" minutes is approximately 1902 years and "<<leftDays<<" days";
}
