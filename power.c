#define EXP 2.7182

    double Pow(double x , int y)
     {
        //reason why I use ans and p instead of y and x is because I remember that C goes to the adress of x and y
        //thus changing it's content and corrupting future power calculations 
        double ans = 1;
        int p = y;
        //saves time if x is 0, also would remove math error from Pow(0,>=0)
        if(x == 0)
        {
            return 0;
        }
        //for positive y
        if(p > 0)
        {
            while(p != 0)
            {
                ans = ans*x;
                p = p-1;
            }
            return ans;
        }
        //for negative y
        if(p < 0)
        {
            while(p != 0)
            {
                ans = ans*x;
                p = p+1;
            }
            return 1/ans;
        }
        //for 0 y
        if(p == 0)
        {
            return ans;
        }
        return 0;
    }

    double Exp(int x)
        {
            return Pow(EXP,x);
        }
