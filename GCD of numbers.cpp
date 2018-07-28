#include<iostream>
using namespace std;
int GCD(int a,int b)
{
int gcd=0;
int gcdmax=0;
int d;
for(d=1;d<=a+b;d++)
{
	if(a%d==0 && b%d==0)
	{
		gcd=d;
	 
	}
	if(gcdmax<gcd)
	{
		gcdmax=gcd;
//		return gcdmax;
		 
	}	
}
}



int main()
{

int a=10,b=4;
cout<<"GCD of two numbers is:"<<GCD(a,b);
}


