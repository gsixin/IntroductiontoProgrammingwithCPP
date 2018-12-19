#include<iostream>
using namespace std;

int main(){
	int start=0;
	int end=0;
	cout<<"Enter today's day:";
	cin>>start;
	cout<<"Enter the number of days elapsed since today:";
	cin>>end;
	end+=start;
	end=end%7;
	switch(start){
		case 0:
			cout<<"Today is Sunday";
			break;
		case 1:
			cout<<"Today is Monday";
			break;
		case 2:
			cout<<"Today is Tuesday";
			break;
		case 3:
			cout<<"Today is Wednesday";
			break;
		case 4:
			cout<<"Today is Thursday";
			break;
		case 5:
			cout<<"Today is Friday";
			break;
		case 6:
			cout<<"Today is Saturday";
			break;
		default:
			break;
	}
	switch(end){
		case 0:
			cout<<" the future day is Sunday";
			break;
		case 1:
			cout<<" the future day is Monday";
			break;
		case 2:
			cout<<" the future day is Tuesday";
			break;
		case 3:
			cout<<" the future day is Wednesday";
			break;
		case 4:
			cout<<" the future day is Thursday";
			break;
		case 5:
			cout<<" the future day is Friday";
			break;
		case 6:
			cout<<" the future day is Saturday";
			break;
		default:
			break;
	}
	
}
