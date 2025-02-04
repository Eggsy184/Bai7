#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,dem;
	cin >> a >> b;
	if (a >b)
	{
		c=a;
		a=b;
		b=c;
	}
	if (a <2 )
		d=2;
	else
		d=a;
		
	for ( int i=d; i<=b; i++)
		{
			dem =0;
			for ( int j=2; j<=(i-1);j++)
			{
				
				if (i%j==0)
					dem++;
				
			}
			if (dem ==0)
					cout << i << " ";
		}
}	
	

