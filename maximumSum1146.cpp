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

const int MAXN = 105;

int n, tab[MAXN][MAXN], res[MAXN];

int calc(int* arr, int size)
{
    int sum = 0, maxSum = -1000000;
    int finish = -1;
    
    REP(i, size)
    {
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        else if(sum > maxSum)
            maxSum = sum, finish = i;
    }
    
    if(finish != -1)
        return maxSum;
    
    maxSum = arr[0];
    
    FOR(i, 1, n-1)
        if(arr[i] > maxSum)
            maxSum = arr[i];
        
    return maxSum;
    
}

int main()
{
    scanf("%d", &n);
    
    REP(i, n)
        REP(j, n)
            scanf("%d", &tab[i][j]);
        
    int maks = -1000;
    
    REP(left, n)
    {
        REP(i, n)
            res[i] = 0;
        
        FOR(right, left, n-1)
        {
            REP(i, n)
                res[i] += tab[i][right];
                
            int sum = calc(res, n);
                
            if(sum > maks)
                maks = sum;
        }
    }
        
    
    printf("%d\n", maks);
    
    return 0;
}