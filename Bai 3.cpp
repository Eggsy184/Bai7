#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (a>0 & b>0 & c>0)
	{
		if ((a+b)> c)
			cout <<"1";
		else 
			cout << "0";
	}
	else
		cout << "0";
	}
