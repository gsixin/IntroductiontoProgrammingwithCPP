#include<iostream>
#include<iomanip> 
#include<cmath>
using namespace std;

int main(){
	//cout<<noshowpos<<fixed<<setw(12)<<left<<setfill(' ')<<13.33<<endl;
	double pows[5][2]={
	 	{2.5,1.2},
	 	{5.0,2.4},
	 	{1.2,3.6},
	 	{2.4,5.0},
	 	{3.6,2.5}
	 }; 
	 cout<<noshowpos<<fixed<<setw(13)<<left<<setfill(' ')<<"x";
	 cout<<noshowpos<<fixed<<setw(13)<<left<<setfill(' ')<<"y";
	 cout<<noshowpos<<fixed<<setw(13)<<left<<setfill(' ')<<"pow(x,y)"<<endl;
	 for(int i=0;i<5;i++){
	   double x=pows[i][0],y=pows[i][1];
	   cout<<noshowpos<<fixed<<setprecision(1)<<setw(13)<<left<<setfill(' ')<<x;
	   cout<<noshowpos<<fixed<<setprecision(1)<<setw(13)<<left<<setfill(' ')<<y;
	   cout<<noshowpos<<fixed<<setprecision(4)<<left<<setfill(' ')<<pow(x,y);
	   cout<<endl;
	 }
}
