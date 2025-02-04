#include <iostream>
using namespace std;

int main()
{
	int n,a=0,b=1,c;
	cin >>n;
	cout << a << " ";
	for (int i=1; i<=(n-1);i++)
	{
		c=b;
		b=a;
		a=b+c;
		cout << a << " " ;
	}
}
