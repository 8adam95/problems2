//http://codeforces.com/problemset/problem/672/A

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

int n;

int main()
{
    scanf("%d", &n);
    int cnt = 1;
    for(int i = 1; i <= 1000; i++)
    {
        if(i == 10)
            cnt++;
        if(i == 100)
            cnt++;
        n -= cnt;
        if(n == 0)
        {
            return printf("%d\n", i%10), 0;
        }
        if(n == -1)
        {
            return printf("%d\n", (i/10)%10), 0;
        }
        if(n == -2)
        {
            return printf("%d\n", (i/100)%10), 0;
        }
    }
    
    
    return 0;
}