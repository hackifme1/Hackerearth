// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define f(a,b) for(ll i=a;i<b;i++) 
int main()
{
	ll n,q;
	cin>>n>>q;
	ll a[n],i,j,cnt;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		j=a[i];
		ll k=0;
		cnt=0;
		while(j)
		{
			ll r=j%2;
			if(r==1)
			cnt++;
			else
			{
				k=max(k,cnt);
				cnt=0;
			}
			
			j=j/2;
		}
		k=max(k,cnt);
		if(k>=2)
		a[i]=1;
		else 
		a[i]=0;
	}
   
      for(i=0;i<n;i++)
      {
          if(i==0)
          a[i]=a[0];
          else
          a[i]=a[i-1]+a[i];
      }
      
      while(q--)
      {
          ll l,r;

          cin>>l>>r;
          l--;r--;
          if(l==0)
          cout<<a[r]<<endl;
          else
          cout<<a[r]-a[l-1]<<endl;
      }
	return 0;
}