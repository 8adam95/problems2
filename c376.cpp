#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;


int col[200006];

int n, m, k;
vector<int> v[200006];
vector<int> visCol;

int count[200006];


int dfs(int a)
{
    vis[a] = true;
    visCol.push_back(a);
    
    
    count[col[a]]++;
    
    for(auto vert: v[a])
        if(!vis[vert])
            dfs(vert);
    
    
}

int main()
{
    scanf("%d %d %d", &n, &m, &k);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &col[i]);
        
    for(int i = 0; i < m; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        v[l].push_back(r);
        v[r].push_back(l);
    }
    
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        if(!vis[i])
        {
            dfs(i);
            for(int i = 0; i < visCol.size(); i++)
                cnt = max(cnt, count[col[visCol[i]]]),  count[col[visCol[i]]] = 0;
        }
        res += vis
    
    }    
    
    return 0;
}