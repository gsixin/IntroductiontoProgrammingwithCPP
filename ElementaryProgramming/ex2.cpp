#include<iostream>
#define PI 3.14159
using namespace std;

int main(){
	double radius=0;
	double length=0;
	cout<<"Enter the radius and length of a cylinder :";
	cin>>radius>>length;
	double area=PI*radius*radius;
	double volume=area*length;
	cout<<"The area is: "<<area<<endl;
	cout<<"The volume is: "<<volume<<endl;
	return 0;
} 
