#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
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
    long long a;
    double tab[128*1024+2];
    int l = 0;
    
    while(cin >> a)
    {
        tab[l] = sqrt(a);
        l++;
    }
    FORD(i, l-1, 0)
        printf("%.4lf\n", tab[i]);
    
    return 0;
}