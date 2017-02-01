#include<cstdio>
#include<iostream>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
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

int tab[100005];

int main()
{
    tab[0] = 0;
    tab[1] = 1;
    int ind;

    for(int i = 2; i <= 100000; i++)
    {
        tab[i] = tab[i-1]+tab[i-2];
        if(tab[i] > 1000000)
        {
            ind = i;
            break;
        }
    }
    int mini = 1000000000;
    scanf("%d", &n);
    for(int i = 0; i <= ind; i++)
    {
        mini = min(mini, min(n-tab[i], tab[i]-n));
    }
    return mini;
        
    

    return 0;
}