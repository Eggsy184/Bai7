#include <math.h>
#include <iostream>
using namespace std;

int ktrahh(int n)
{
	int c=0;
	for (int b=1; b<n; b++)
	{
		if (n%b==0)
			c=c+b;
	}
	if ( c==n)
	{
		return 1;
	}
		return 0;
}
int main()
{
	int a,b;
	cin >> a >> b;
	if ( a <0 || b <0)
		cout << "0";
	else
	{
		if (a>b)
		{
			int c=a;
			a=b;
			b=c;
		}
		int dem=0;
		for ( int i=a; i<=b;i++)
		{
			if (ktrahh(i)==1)
			{	
				cout << i << " ";
				dem++;
			}
		}
		if (dem ==0)
			cout << "0";
	}
}
			
