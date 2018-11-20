#include<iostream>
using namespace std;

int main(){
	int a=0,b=0;
	cout<<"Enter two integer:";
	cin>>a>>b;
	if(a%b==0){
		cout<<a<<" is divisible by "<<b;
	}
	else{
		cout<<a<<" is not divisible by "<<b;
	}
}

