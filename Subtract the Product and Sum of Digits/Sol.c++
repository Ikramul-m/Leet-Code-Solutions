class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int pro = 1;
        int sum = 0;

        for(;n!=0;)
        {
            int r = n%10;
            pro = pro * r; // Product of Digits
            sum = sum + r; // Sum of Digits
            n = n/10;
        } 

        int output = pro - sum;
        return output;
    }
};