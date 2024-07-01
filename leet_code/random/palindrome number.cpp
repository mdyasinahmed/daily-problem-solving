class Solution {
public:
bool isPalindrome(long long int x) {
        long long int num = x;
        long long int store=0;
        while(num>0) {
            long long int last = num%10;
            store = store*10 + last;
            num=num/10;
        }

        if(store==x) {
            return true;
        }

        return false;
    }

};
