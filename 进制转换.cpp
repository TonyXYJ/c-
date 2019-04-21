#include<iostream>
using namespace std;
class Number
{
	public:
		Number();
		int convert(int a,int b);
		void show();
		int m[100],p;
};

Number::Number()
{
	
}
int Number::convert(int a,int b)
{
	p=0;
	while(a>0)
	{
		m[p]=a%b,a=a/b,p++;
	}
}
void Number::show()
{
	for(int s=p-1;s>=0;s--)
	{
		cout<<m[s];
	}
}

int main()
{
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		Number no;
		no.convert(x,y);
		no.show();
		cout<<endl;
	}
	return 0;
}
