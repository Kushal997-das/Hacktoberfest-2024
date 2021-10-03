#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,max=0,w=1,res1=0,res2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		a+=res1;
		b+=res2;
		if(a>b)
		{
			if((a-b)>max)
			{
				max=a-b;
				w=1;
			}
		}
		else
		{
			if((b-a)>max)
			{
				max=b-a;
				w=2;
			}			
		}
		res1=a;
		res2=b;
	}
	cout<<w<<" "<<max;
	return 0;
}