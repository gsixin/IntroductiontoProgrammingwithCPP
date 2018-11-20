#include<iostream>
#include<cmath>
using namespace std;

int main(){

	char rt='Y';
	while(rt=='Y'||rt=='y')
	{
    double a=0,b=0,c=0;
	cout<<"Enter a, b, c :";
	cin>>a>>b>>c;
	double r1=0,r2=0;
	double dis=pow(b,2)-4*a*c;
	if(dis<0){
		cout<<"The equation has no real roots"<<endl;
	}
	else if(dis==0){
		r1=-b/(2*a);
		cout<<"THe root is "<<r1<<endl;
	}
	else{
		r1=(-b+sqrt(dis))/(2*a);
		r2=(-b-sqrt(dis))/(2*a);
		cout<<"THe roots are "<<r1<<" and "<<r2<<endl;
	}
	cout<<"will you continue this play?[y/n]";
	cin>>rt;
}
} 
