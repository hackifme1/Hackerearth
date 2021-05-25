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
	ll t,n,k,x;
	cin >> t;
	while ( t-- ) {
		cin >> k >> n;
		ll i, ans = k;
		for (i = 0; i < n; i++ )
		 {
			cin >> x;
			ans = (ans & x);
		}
		if (ans==0) 
		cout<<"Yes"<<endl;
		else 
		cout<<"No"<<endl;
	}
	

	return 0;
}