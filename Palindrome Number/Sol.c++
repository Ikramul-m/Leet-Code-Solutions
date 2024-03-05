class Solution
{
public:
    bool isPalindrome(int x)
    {

        int num = x;
        int rev = 0;

        if (x < 0)
        {
            return false;
        }

        for (; x != 0;)
        {
            int r = x % 10;
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10))
            {
                return false;
            }
            rev = (rev * 10) + r;
            x = x / 10;
        }

        if (num == rev)
            return true;
        else
            return false;
    }
};