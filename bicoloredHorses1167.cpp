#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back


int tab[505][3];
long long res[505][505];

long long subsetValue(int end, int beg)
{
	int white = tab[end][0]-tab[beg-1][0];
	int black = tab[end][1]-tab[beg-1][1];
	return (ll) white*black;
}

long long min(long long a, long long b)
{
	if(a < b)
		return a;
	return b;
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	
	FOR(i, 1, n)
	{
		int c;
		scanf("%d", &c);
		tab[i][c] = 1;
	}
	
	FOR(i, 1, n)
	{
		tab[i][0] += tab[i-1][0];
		tab[i][1] += tab[i-1][1];
	}
	
	FOR(i, 1, n)
		res[i][0] = res[0][i] = 1000000000;


	FOR(i, 1, n)
		FOR(j, 1, k)
		{
			res[i][j] = 1000000000;
			if(i < j)
				continue;
			FORD(l, i, 1)
				res[i][j] = min(res[i][j], res[l-1][j-1] + subsetValue(i, l));
		}
	printf("%lld\n", res[n][k]);

	return 0;
}
