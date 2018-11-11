#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double side=0;
	cout<<"Enter the side of Hexagon:";
	cin>>side;
	while(!side>0)
	{
		cout<<"please make sure input bigger than Zero!"<<endl<<"Input again!!!"<<endl;
		cin>>side;
	}
	double area=(3*sqrt(3)/2)*pow(side,2);
	cout<<"The Area of the hexagon is "<<area;
} 
