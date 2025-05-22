class Solution
{
public:
    double myPow(double x, int n)
    {
        // handling the edge cases
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1) 
        {
            return (n % 2 == 0) ? 1.0 : -1.0;
        }

        // logic started
        long binForm = n;
        double ans = 1;

        // handling the negative power case
        if (n < 0)
        {
            x = 1 / x;
            binForm = -binForm;
        }

        while (binForm > 0)
        {
            if (binForm % 2 == 1)
            {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }

        return ans;
    }
};