#include <iostream>
using namespace std;

int main()
{
	long n;
	cin >>n;
	for (int i=2; i <=n; i++)
	{	
		int dem=0;
		while (n%i==0)
		{
			dem++;
			n = n /i;
		}
		if (dem !=0)
			cout << i << " ";
	
	
	}
}
