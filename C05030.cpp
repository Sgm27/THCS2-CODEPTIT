#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int n,m,a[1005][1005],hang[1005][3],cot[1005][3];
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
void reset()
{
	for (int i=1;i<=n;i++) 
		{
			hang[i][1]=0;
			hang[i][2]=0;
		}
	for (int j=1;j<=m;j++) 
		{
			cot[j][1]=0;
			cot[j][2]=0;
		}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++) a[i][j]=0;
}

int main()
{
//	freopen("thu.inp","r",stdin);
	int tc;
	scanf("%d",&tc);
	while (tc--)
	{
		long long res=0;
		scanf("%d %d",&n,&m);
		reset();
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++)
			{
				char x;
				scanf(" %c",&x);
				if (x!='0') 
				{
					int tmp=x-'0';
					a[i][j]=tmp;
					if (tmp==1)
					{
						cot[j][1]++;
						hang[i][1]++;
					}
					else
					{
						cot[j][2]++;
						hang[i][2]++;
					}
				}
			}
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++)
				if (a[i][j]==1 || a[i][j]==2)
				{
					if (a[i][j]==1) res+=hang[i][2]*cot[j][2];
					else res+=hang[i][1]*cot[j][1];
				}
		printf("%lld\n",res);
	}
}


