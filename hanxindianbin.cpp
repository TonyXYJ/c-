#include<iostream>
using namespace std;
class HanXin
{
	public:
		HanXin();
		int line3(int x);
		int line5(int y);
		int line7(int z);
		void showMany();
		int a[100],b[100],t,u,v,h,m,j;
	private:
		
};

HanXin::HanXin()
{
	
}
int HanXin::line3(int x)
{
	for(t=0;;t++)
	{
		a[t]=3*t+x;
		if(a[t]>=100)  break;
		else  continue;
	}
}
int HanXin::line5(int y)
{
	j=0;
	for(h=0;h<t;h++)
	{
		if((a[h]-y)%5==0&&a[h]>10&&a[h]<100)
		{
			for(;;)
			{
				b[j]=a[h];
				j++;
				break;
			}
		}
		else
		continue;
	}
	if(b[j]>0)  u=1;
	else  u=0;
	return u;
}
int HanXin::line7(int z)
{
	for(m=0;m<j;m++)
	{
	    if((b[m]-z)%7==0&&b[m]>10&&b[m]<100)
	    {
	    	v=1;
	    	break;
		}
		else   continue;
	}
	if(m==j)   v=0;
	return v;
}
void HanXin::showMany()
{
	if(u&&v)
	cout<<b[m]<<endl;
	else
	cout<<"impossible"<<endl; 
}

int main()
{
	int n,n1,n2,n3;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>n1>>n2>>n3;
		HanXin hx;
		hx.line3(n1);
		hx.line5(n2);
		hx.line7(n3);
		hx.showMany();
	}
	return 0;
} 
