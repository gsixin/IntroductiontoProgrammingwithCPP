#include<iostream>
using namespace std;

int main(){
	double x=0,y=0;
	cout<<"Enter a point with two coordinates:";
	cin>>x>>y;
	if(x<5&&y<2.5){
		cout<<"Point("<<x<<","<<y<<") is in the rectangle";
	} 
	else{
		cout<<"Point("<<x<<","<<y<<") is not in the rectangle";
	}
}
