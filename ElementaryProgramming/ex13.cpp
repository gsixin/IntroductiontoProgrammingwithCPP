#include<iostream>
using namespace std;

int main(){
	double amount=0;
	double mrate=0.00417;
	double sum=0;
	int month=0;
	cout<<"Enter the monthly saving amount and total monthes:";
	cin>>amount>>month;
	for(int i=0;i<month;i++){
		sum=(sum+amount)*(1+mrate);
	}

	cout<<"After the "<<month<<" monthes,the account value is $"<<sum;
}
