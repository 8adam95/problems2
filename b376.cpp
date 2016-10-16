#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;


int a[200006];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    cin >> a[0];
    if(a[0] % 2 != 0)
        cnt = 1;
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if((a[i] + cnt) %  2 == 0)
            cnt = 0;
        else if (cnt == 1 && a[i] == 0)
            return printf("NO\n"), 0;
        else
            cnt = 1;
    }

    if(cnt == 0)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}