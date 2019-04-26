#include<iostream>
using namespace std;
class num
{
	public:
		num();
		void Get(int m,int n);
		int CAG();
		void show();
	private:
		int x,y;
};

num::num()
{
	cin>>x>>y;
}
void num::Get(int m,int n)
{
	x=m,y=n;
}
int num::CAG()
{
	for(;;)
	{
		if(x>y)
		{
			x=x%y;
			if(x==0)
			{
				x=y;
				return x;
			} 
			else  continue;  
		}
		else if(x<=y)
		{
			y=y%x;
			if(y==0)  return x;
			else  continue;
		}
	}
}
void num::show()
{
	cout<<x<<endl;
}

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		num newnum;
		newnum.CAG();
		newnum.show();
	}
	return 0;
}
