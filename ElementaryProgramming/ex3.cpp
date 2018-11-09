#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a value for feet:";
	double feet=0;
	double meter=0;
	cin>>feet;
	meter=0.305*feet;
	cout<<feet<<" feet is "<<meter<<" meters";
}
