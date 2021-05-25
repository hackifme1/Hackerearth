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
	ll n,i,res=0;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		res=res|a[i];
	}
	cout<<res;
	return 0;
}