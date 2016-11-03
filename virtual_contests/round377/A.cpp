#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cmath>
#include<cstring>
#include<string>
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
    int k, r;
    scanf("%d %d", &k, &r);
    for(int i = 1; i <= 10; i++)
        if((i*k-r)%10 == 0 || (i*k)%10 == 0)
            return printf("%d\n", i), 0;
    

    return 0;
}