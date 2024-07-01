class Solution {
public:
    long long int differenceOfSums(long long int n, long long int m) {
        long long int num1=0, num2=0;
        for(long long int i=1; i<=n; i++) {
            if(i%m!=0){
                num1+=i;
            } else {
                num2+=i;
            }
        }

        return num1-num2;;
    }
};
