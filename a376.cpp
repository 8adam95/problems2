#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;


int main()
{
    string a;
    cin >> a;
    char pos = 'a';

    int res = 0;

    for(int i = 0; i < a.size(); i++)
    {
        if((int)a[i] > pos)
            res += min(a[i]-pos, 26-a[i]+pos);
        else
            res += min(pos-a[i], 26-pos+a[i]);

        pos = a[i];

    }

    printf("%d\n", res);



    return 0;
}