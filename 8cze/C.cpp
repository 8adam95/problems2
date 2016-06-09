#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>

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

bool isPrime[105];

int main()
{
    for(int i = 1; i <= 100; i++)
        isPrime[i] = true;
    
    for(int i = 2; i <= 100; i++)
        for(int j = 2; j <= 100; j++)
            if(i*j <= 100)
                isPrime[i*j] = false;

    int cnt = 0;
    bool fin = false;
    int numbers = 0;
    char response[10];
    
    for(int i = 2; i <= 100; i++)
    {
        if(isPrime[i])
        {
            numbers++;
            printf("%d\n", i);
            fflush(stdout);
            
            scanf("%s", response);
            if(strcmp(response, "yes") == 0)
            {
                
                cnt++;
            }
            if(cnt >= 2)
            {
                printf("composite\n");
                fflush(stdout);
                return 0;
                fin = true;
            }
        }
        if(numbers == 16)
            break;
        
    }
    
    printf("4\n");
    fflush(stdout);
    
    scanf("%s", response);
    if(strcmp(response, "yes") == 0)
        cnt++;
    if(cnt >= 2)
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
        fin = true;
    }
    
    printf("9\n");
    fflush(stdout);
    
    scanf("%s", response);
    if(strcmp(response, "yes") == 0)
        cnt++;
    if(cnt >= 2)
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
        fin = true;
    }
    
    printf("25\n");
    fflush(stdout);
    
    scanf("%s", response);
    if(strcmp(response, "yes") == 0)
        cnt++;
    if(cnt >= 2)
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
        fin = true;
    }
    
    printf("49\n");
    fflush(stdout);
    
    scanf("%s", response);
    if(strcmp(response, "yes") == 0)
        cnt++;
    if(cnt >= 2)
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
        fin = true;
    }
    
    
    if(!fin)
    {
        printf("prime\n");
        fflush(stdout);
    }
            
    return 0;
}