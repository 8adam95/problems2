#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cstring>
#include<string>
using namespace std;

string str;

int main()
{
	int n;
	int maxLongest = 0;
	int wordsInside = 0;
	bool inside = false;
	int cnt = 0;

	scanf("%d", &n);
	cin >> str;



	for(int i = 0; i < n; i++)
	{
		if(str[i] == '(')
			inside = true, maxLongest = max(maxLongest, cnt), cnt = 0;
		else if(str[i] == ')')
			inside = false;
		else if(inside && str[i] != '_' && (str[i-1] == '_' || str[i-1] == '('))
			wordsInside++;
		else if(!inside && str[i] != '_' && str[i] != '(' && str[i] != ')')
			cnt++;
		else if(str[i] == '_')
			maxLongest = max(maxLongest, cnt), cnt = 0;
	}
	if(str[n-1] != ')' && str[n-1] != '_')
		maxLongest = max(maxLongest, cnt);

	printf("%d %d\n", maxLongest, wordsInside);

	return 0;
}