#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back


int tab[2005], cnt[2005];

int main()
{

	int n, m;

	scanf("%d %d", &n, &m);


	int ans = n/m;

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &tab[i]);
		if(tab[i] <= m)
			cnt[tab[i]]++;
	}

	int ans2 = 0;


	for(int i = 0; i < n; i++)
		if(tab[i] > m || tab[i] <= m && cnt[tab[i]] > ans)
		{
			for(int j = 1; j <= m; j++)
			{
				if(cnt[j] < ans)
				{
					if(tab[i] <= m)
						cnt[tab[i]]--;
					tab[i] = j;
					cnt[j]++;
					ans2++;
					break;
				}

			}
		}

	printf("%d %d\n", ans, ans2);	
	REP(i, n)
		printf("%d ", tab[i]);


	return 0;
}