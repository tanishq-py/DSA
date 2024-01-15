class Solution {
public:
    int reverse(int x) {
        int digit=0;
        int reverse=0;
        while(x!=0){
            digit=x%10;
            if(reverse>(INT_MAX/10)||reverse<(INT_MIN)/10){
                return 0;
            }
            reverse=10*reverse+ digit;
            x=x/10;
        }
        return reverse;
    }
};
