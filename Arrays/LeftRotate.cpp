//left shift by 1 place
// Given an array 'arr' containing 'n' elements, rotate this array left once and return it.
// Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp= arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return {};
}


//left rotate by D places
//Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.
vector<int> rotateArray(vector<int>arr, int k) {
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<arr.size();i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[arr.size()-k+i]=temp[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return {};
}

//reverse array int two parts then reverse again
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;  
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
};




