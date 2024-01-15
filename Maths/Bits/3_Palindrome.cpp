//Check whether a given number ’n’ is a palindrome number
class Solution {
public:
    bool isPalindrome(int x) {
        long long int reverse=0;
        long long int orginal=x;
        while(x!=0){
            reverse=reverse*10+(x%10);
            x=x/10;
        }
        if(orginal<0){
        return false;
        }
        
        if(orginal==reverse){
            return true;
        }

        return false;
    }
};
