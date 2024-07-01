class Solution {
public:
    int subtractProductAndSum(long long int n) {
        long long int prod=1, sum=0;
        
        while(n>0) {
            long long int last = n%10;
            prod*=last;
            sum+=last;
            n/=10;
        }

        return prod-sum;
    }
};
