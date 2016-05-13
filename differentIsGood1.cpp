//http://codeforces.com/problemset/problem/672/B

#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cmath>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back

string a;
int n, bucket[40], res;

int main()
{
    scanf("%d", &n);
    cin >> a;
    
    int left = 26;
    
    REP(i, n)
        bucket[a[i]-'a']++;
    
    REP(i, 39)
        if(bucket[i] >= 1)
            res += bucket[i]-1, left -= bucket[i];
    if(left < 0)
        printf("-1\n");

    else
        printf("%d\n", res);
        
    
    return 0;
}

