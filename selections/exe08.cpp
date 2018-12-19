#include<iostream>
using namespace std;

int  main(){
	char T='t';
	while (T=='t'){
	
	cout<<"please type three edges of a triangle:";
	double e1=0,e2=0,e3=0;
	cin>>e1>>e2>>e3;
	if(e1==e2&&e2==e2){
		cout<<"Equilateral Trangle";
	}
	else if((e1==e2&&e2!=e3)
	||(e1==e3&&e1!=e2)
	||(e2==e3&&e2!=e1)){
		cout<<"Isosceles Triangle";
	}
	else{
		cout<<"Single Triangle";
	}
	cin>>T;
}
} 
