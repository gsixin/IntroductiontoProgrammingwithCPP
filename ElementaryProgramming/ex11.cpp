#include<iostream>
using namespace std;

int main(){
	int total=312032486;
	int years=0;
	cout<<"Enter the number of years:"
;	cin>>years;
	int seconds=years*365*24*60*60;
	int birth=seconds/7;
	int death=seconds/13;
	int immigrant=seconds/45;
	total=total+birth+immigrant-death;
	cout<<"The population in "<<years<<" years is:"<<total;
} 
