#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int l,int r){
    if(l>=r){
        return 0;
    }
    swap(arr[l],arr[r]);
    reverse(l+1,r-1);
}

int main(){
    int arr[3]={1,2,3};
    int l= 0;
    int r= 2;
    reverse(arr, l,r);
    return 0;
}


//2nd method
vector<int> reverseArray(int n, vector<int> &nums)
{
    if(n<=0) return {};
    cout<<nums[n-1]<<" ";
    return reverseArray(n-1, nums);
}
