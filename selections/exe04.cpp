#include<iostream>
using namespace std;

int main(){
	cout<<"Enter speed:";
	double speed=0;
	cin>>speed;
	if(speed<20){
		cout<<"too slow";
	}
	else if(speed>80){
		cout<<"too fast";
	}
	else{
		cout<<"just right";
	}
}
