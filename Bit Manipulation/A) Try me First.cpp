// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


C code :

#include<stdio.h>
#include<math.h>
long long powr(long long n)
{
    long long i,l=1;
    for(i=1;i<=n;i++)
    {
        l=l*2;
    }
    return l;
}

int main()
{
	long long n,i,j,k=0;
	scanf("%lld",&n);
	long long a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=32;j++)
		{
			if(a[i]==powr(j))
			k++;
		}
	}
	printf("%lld",k);
	return 0;
}