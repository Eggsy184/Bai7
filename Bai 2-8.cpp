#include <stdio.h>
#define MAX 100
void NhapMatran(int a[][MAX], int &m, int &n)
{	scanf("%d %d",&m, &n);
	for(int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
}
int HangMax (int a[][MAX],int m,int n)
{	int Tongmax=0,vt,Tonghang=0;
	for (int i=0;i<m;i++)
		{	for (int j=0;j<n;j++) 
				Tonghang=Tonghang+a[i][j];
			if (Tonghang>Tongmax)
			{	Tongmax=Tonghang;
				vt=i;			
			}
			Tonghang=0;
		}
	return vt;
}
void XoaHangMax (int a[][MAX],int &m,int n,int vt)
{	for (int i=vt;i<m-1;i++)
		for (int j=0;j<n;j++) 
			a[i][j]=a[i+1][j];
	m=m-1;
}
int CotMax (int a[][MAX],int m,int n)
{	int Tongmax=0,vt,Tongcot=0;
	for (int j=0;j<n;j++)
		{	for (int i=0;i<m;i++) 
				Tongcot=Tongcot+a[i][j];
			if (Tongcot>Tongmax)
			{	Tongmax=Tongcot;
				vt=j;			
			}
			Tongcot=0;
		}
	return vt;
}
void XoaCotMax (int a[][MAX],int m,int &n,int vt)
{	
	for (int j=vt;j<n-1;j++)
		for (int i=0;i<m;i++) 
			a[i][j]=a[i][j+1];
	n=n-1;
}
void XuatMatran (int a[][MAX], int m, int n)
{	for(int i=0;i<m;i++)
	{	for (int j=0;j<n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
int main()
{	int a[MAX][MAX], m,n;
	NhapMatran(a,m,n);
	int vthang=HangMax(a,m,n);
	int vtcot=CotMax(a,m,n);
	XoaHangMax(a,m,n,vthang);
 	XoaCotMax (a,m,n,vtcot);
	XuatMatran(a,m,n);
}
