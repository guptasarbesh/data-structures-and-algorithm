#include<iostream>
using namespace std;
int fibo(int n)
{
	int f[n+2];
	int i;
	f[0]=0;
	f[1]=1;
	for(i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
		
	}
	return f[n];
}

int main()
{
	int n;
	cout<<"Enter any to get the fibonaccci numvbers\n";
	cin>>n;
	cout<<fibo(n);
	return 0;
}

