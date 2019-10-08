#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a;
	float p=100000;
	float r=0.1;
	for(int day;day<=30;day++)
	{
		a=p*pow(1+r,day);
		cout<<day<<"---------"<<a<<endl;
		
	}
}
