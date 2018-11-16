#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double s=0;
	double s1=0,s2=0,s3=0;
	double area=0;
	double x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
	cout<<"Enter three points for a triangle:";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	s1=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
	s2=sqrt(pow(y3-y2,2)+pow(x3-x2,2));
	s3=sqrt(pow(y3-y1,2)+pow(x3-x1,2));
	s=(s1+s2+s3)/2;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"The area of the triangle is "<<area<<endl;
}
