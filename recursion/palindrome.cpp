#include<bits/stdc++.h>
using namespace std;
bool palindrome(string arr[],int i,int n){
    if(i>=n/2){
        return true;
    }
    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    palindrome(arr, i+1, n);
}

int main(){
    string arr[5]="madam";
    int i= 0;
    int n=3;
    cout<<palindrome(arr, i,n);
    return 0;
}

//2nd method
bool isPalindrome(string& str) {
    static int i=0;
    static int j=str.size()-1;
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    i++;
    j--;
    return true&&isPalindrome(str);
}
