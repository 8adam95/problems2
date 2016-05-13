#include<cstdio>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i = 1; i <= a; i++)
	{
		int pom = a/i;
		if(pom*i == a)
		{
			int pom2 = b/i;
			if(pom2*i == b)
			{
				if(pom*pom2 == c)
					return printf("%d\n", 4*(pom+pom2+i)), 0;
			}
		}
	}
	return 0;
}
