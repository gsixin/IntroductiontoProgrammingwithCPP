#include<iostream> 
using namespace std;

class Person{
	public:
		int age;
		int high;
};

int main(){
	int *p;
	int num=9;
	p=&num; 
	*p=88;
	cout<<p<<endl;
	int nms[2]={1,2};
	cout<<nms<<endl;
	int (*pi)[2];
	int *po;
	pi=&nms;
	po=&nms[1];
	Person pp;
	pp.age=10;
	pp.high=170;
//	pi=nms;
	//cout<<pp<<endl;
	cout<<*&pp.age<<endl;
	cout<<&pp.high<<endl;
}

