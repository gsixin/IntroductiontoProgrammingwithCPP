#include<iostream>
using namespace std;

int main(){
	double x1=0,y1=0,x2=0,y2=0;
	cout<<"Enter the coordinates for two points:";
	cin>>x1>>y1>>x2>>y2;
	double slope=(y2-y1)/(x2-x1);
	cout<<"The clope for the line that connects two points("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<slope<<endl;
}
