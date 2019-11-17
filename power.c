#include <stdio.h>
#define e 2.7182

    double Pow(double x , int y)
     {
        double ans = x;

        if(y == 0 && x != 0)
        {
            ans = 0;
        }
        else
        {
            for (int i = 0; i < y-1; ++i)
            {
            ans = ans*x;
            }
        }
        if(y > 0)
        {
            return ans;
        }
        else
        {
            return 1/ans;
        }
    }

    double Exp(int x)
        {
            return Pow(e,x);
        }