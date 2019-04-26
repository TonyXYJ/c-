#include<iostream>
using namespace std;
int m[200];
class Superprime
{
	public:
		int Isprime(int i)
		{
			for(t=2;t<i;t++)
			{
				if(i%t==0) break;
				else continue;
			}
			return (t==i);
		}
	private:
	int i;
	int t;	
};
int main()
{
	Superprime Sp;
	int supersum=0;
	int k=0,count=0;
	for(int i=100;i<1000;i++)
	{
		if(Sp.Isprime(i))
		{
			int a=i/100,b=(i%100)/10,c=i%10;
			int sum=a+b+c,pro=a*b*c,quasum=a*a+b*b+c*c;
			int f,g,h;
			if(sum==2)	f=sum-1;
			else
			{
				Sp.Isprime(sum);
			}
			if(Sp.Isprime(sum))
			{
				if(pro==0||pro==1)	continue;
				else if(pro==2)	g=pro-1;
				else
				{
					Sp.Isprime(pro);
				}
				if(Sp.Isprime(pro))
				{
					if(quasum==2)	h=quasum-1;
					else
					{
						Sp.Isprime(quasum);
						if(Sp.Isprime(quasum))
						count++,m[k]=i,k++;
					}
				}
			}
		}
	}
	for(int l=0;l<k;l++)
		supersum=supersum+m[l];
	cout<<"超级素数的个数："<<k<<endl;
	cout<<"超级素数的和："<<supersum<<endl;
	cout<<"最大的超级素数："<<m[k-1];	
	return 0; 
}
