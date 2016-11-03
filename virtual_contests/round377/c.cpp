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

ll a[4], res[4];

int main()
{
    REP(i, 3)
        cin >> a[i];
    ll result = 2000000000000000000;
    
    REP(i, 3)
        REP(j, 3)
        {
            REP(k, 3)
                res[k] = a[k];
            if(i >= 1)
                res[0]++;
            if(i >= 2)
                res[1]++;
            if(j >= 1)
                res[2]++;
            if(j >= 2)
                res[1]++;
            
            ll mini = min(res[0], min(res[1], res[2]));
            REP(i, 3)
                res[i] -= mini;
                
            sort(res, res+3);
            result = min(result, res[1]+(res[2]-res[1])*2);
        }
        
        cout << result << "\n";
    
    

    return 0;
}