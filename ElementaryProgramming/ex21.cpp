#include<iostream>
using namespace std;

int main(){
	double distance=0;
	double milesPergallon=0;
	double pricepergallon=0;
	double cost=0;
	cout<<"Enter the driving distance:";
	cin>>distance;
	cout<<"Enter miles per gallon:";
	cin>>milesPergallon;
	cout<<"Enter price per gallon:";
	cin>>pricepergallon;
	cost=pricepergallon*distance/milesPergallon;
	cout<<"The cost of driving is &"<<cost; 
} 
