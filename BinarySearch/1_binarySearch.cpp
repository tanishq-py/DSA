//You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'.
//Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1

int search(vector<int> &nums, int target) {
    int l=0;
    int r= nums.size()-1;
    int mid= l + (r-l)/2;
    while(l<=r{
        if(target==nums[mid]) return mid;
        else if(target>nums[mid]) l=mid+1;
        else if(target<nums[mid]) r=mid-1;
        mid=l + (r-l)/2;
    }
    return -1;
}
