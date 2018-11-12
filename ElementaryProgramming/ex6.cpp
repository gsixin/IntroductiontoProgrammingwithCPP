#include<iostream>
using namespace std;

int main(){
	int num=0;
	cout<<"Enter a number bigger than zero:";
	cin>>num;
	int sum=0;
	while(num>10){
		int tmp=num%10;
		num=num/10;
		sum+=tmp;
	}
	sum+=num%10;
	cout<<"The sum of the digits is:"<<sum;
	return 0;
} 
