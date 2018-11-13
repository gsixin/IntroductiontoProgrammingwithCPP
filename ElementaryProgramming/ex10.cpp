#include<iostream>
using namespace std;

int main(){
	double in=0;
	double fi=0;
	double m=0;
	double q=0;
	cout<<"Enter the amount of water in kilograms:";
	cin>>m;
	cout<<"Enter the initial temperature:";
	cin>>in;
	cout<<"Enter the final temperature:";
	cin>>fi;
	q=m*(fi-in)*4184;
	cout<<"The energy needed is "<<q; 
} 
