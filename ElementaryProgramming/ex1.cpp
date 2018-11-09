#include<iostream>
using namespace std;

int main(){
	int celsius=0;
	double fahrenheit=0;
	cout<< "Enter a degree in Celsius:";
	cin>>celsius;
	fahrenheit=(9.0/5)*celsius+32;
	cout<<celsius<<" celsius is "<<fahrenheit<<" Fahrenheit";
} 
