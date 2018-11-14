#include<iostream>
using namespace std;

int main(){
	double p=0;
	double inch=0;
	double meter=0;
	double kg=0;
	cout<<"Enter weight in pounds:";
	cin>>p;
	cout<<"Enter height in inches:";
	cin>>inch;
	kg=p*0.45359237;
	meter=inch*0.0254;
	cout<<kg<<"     "<<meter<<endl;
	double bmi=kg/(meter*meter);
	cout<<"BMI is "<<bmi;
} 
