class LastDigit
{
  public:
    long long findX(long long S)
    {
    	long long base = 1111111111111111111;
        long long ans = 0;
        
        for(int i = 18; i >= 0; i--)
        {
            if(S/base>9)
                return -1;
            ans = ans*10+S/base;
            S = S%base;
            base /= 10;
        }
        return ans;
    }
    
};