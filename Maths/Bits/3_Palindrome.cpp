//Check whether a given number ’n’ is a palindrome number
bool palindrome(int n)
{
    int rev=0;
    int org=n;
    while(n!=0){
        int digit=n%10;
        rev= rev*10+ digit;
        n=n/10;
    }
    if(rev==org) return true;
    return false;
}
