#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int max(int a,int b)
{
	if (a>b) return a;
	return b;
}
int min(int a,int b)
{
	if (a>b) return b;
	return a;
}


int main()
{
//	freopen("thu.inp","r",stdin);
	ll n,m,tmp,x;
	while (scanf("%lld %lld",&n,&m)!=-1)
	{
		tmp=abs(n-m);
		x=(ll)(sqrt(tmp));
		while (x*(x+1)<tmp) x++;
		x--;
		if (tmp-x*(x+1)>x+1) printf("%lld\n",x*2+2);
		else printf("%lld\n",x*2+1);
	}
}

