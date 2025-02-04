#include <iostream>
using namespace std;

int main()
{
	int n,x,a=0;
	cin >> n;
	while ( n >0)
	{
		
		x= n%10;
		n=n/10;
		a=a*10+x;
		
	}
	cout <<a;
}
