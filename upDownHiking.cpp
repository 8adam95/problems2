#include<algorithm>
using std::max;
using std::min;

class UpDownHiking
{
	public:
    int maxHeight(int n, int a, int b)
    {   
        int ans = 0;
        for(int i = 0; i <= n; i++)
            ans = max(ans, min(i*a, (n-i)*b));

        return ans; 
    }
};