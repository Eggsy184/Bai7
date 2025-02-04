#include <iostream>
#include <math.h>
using namespace std;

int ktrasodep(int n)
{
	int a=0,b=0,c=0,d=n;
	while (d>0)
	{
		a=d%10;
		d/=10;
		c+=a;
		b=b*10+a;
	}
	if (b==n && c%10==0)
		return 1;
		
		return 0;
}
int main()
{
	int n;
	cin >>n;
	int dem=0;
	for (int i= pow(10, n-1); i < pow(10,n); i++)
	{
		if (ktrasodep(i) ==1)
		{
			dem++;
		}
	}
	cout << dem;
}
			
