//http://codeforces.com/problemset/problem/673/A

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

int main()
{
    int n;
    scanf("%d", &n);
    int prev = 0;
    REP(i, n)
    {
        int a;
        scanf("%d", &a);
        if(a-prev > 15)
        {
            printf("%d\n", min(90, max(0, prev)+15));
            return 0;
        }
        else
            prev = a;
    }
    printf("%d\n", min(90, max(0, prev)+15));
    
    return 0;
}