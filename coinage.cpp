// https://www.hackerrank.com/challenges/coinage

#include <bits/stdc++.h>
using namespace std;

long waysab[1005],wayscd[1005],n;


long long precomp(long a,long b,long c,long d)
{

	long long ans=0;
	int i,j;
	memset(waysab,0,sizeof(waysab));
	memset(wayscd,0,sizeof(wayscd));

	for(i=0;i<=a and i<=n;i++)
	{
		for(j=0;j<=b and i+2*j<=n;j++)
		{
			waysab[i+2*j]++;
			// cout<<waysab[i+2*j]<<" "<<a+2*b;
			// cout<<"yes"<<endl;
		}
	}

	for(i=0;i<=c and 5*i<=n;i++)
	{
		for(j=0;j<=d and 5*i+10*j<=n;j++)
		{
			wayscd[5*i+10*j]++;
		}
	}	



	for(i=0;i<=n;i++)
	{
		// cout<<waysab[i]<<" "<<wayscd[n-i]<<endl;
		ans+= waysab[i]*wayscd[n-i];
	}
	return ans;
}


int main()
{


	int t;

	

	cin>>t;
	int a,b,c,d;
	while(t--)
	{
		cin>>n;
		cin>>a>>b>>c>>d;
		cout<<precomp(a,b,c,d)<<endl;
	}


	return 0;
}