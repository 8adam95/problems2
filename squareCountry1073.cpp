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

int n, tab[305], res[70005], square[305];
bool isSquare[90006];


int main()
{
    scanf("%d", &n);
    
    for(int i = 1; i <= 300; i++)
        square[i] = i*i, isSquare[i*i] = true;
    
    
    for(int i = 1; i <= 70000; i++)
        res[i] = 1000000000;
    
    res[0] = 0;
    res[1] = 1;
    
    for(int i = 1; i <= n; i++)
    {
        if(!isSquare[i])
            for(int j = 1; j <= 300; j++)
            {
                if(square[j] <= n && square[j] < i)
                    res[i] = min(res[i], res[i-square[j]]+1);
                else
                    break;
            }
        else
            res[i] = 1;
    }
    
    
    printf("%d\n", res[n]);


    return 0;
}