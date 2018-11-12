#include<iostream>
using namespace std;

int main(){
	double subtotal=0;
	double rate=0;
	double total=0;
	cout<<"Enter the subtotal and a gratuity rate :";
	cin>>subtotal>>rate;
	double gratuity=subtotal*rate/100;
	total=gratuity+subtotal;
	cout<<"Tne gratuity is $"<<gratuity<<" and total is $"<<total; 
} 
