// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now the array is rotated at some pivot point unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
// Now, your task is to find the index at which ‘k’ is present in 'arr

int search(vector<int>& arr, int n, int k)
{
    int l=0, h=n-1;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(arr[mid]==k) return mid;

        if(arr[l]<=arr[mid]){
            if(arr[l]<=k&&k<=arr[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        else{
            if(arr[mid]<=k&&k<=arr[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        
    }
    return -1;
}

//if not necessarly distinct
bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    int n= A.size();
    int l=0, h=n-1;
    int k=key;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(A[mid]==k) return true;
        if(A[mid]==A[l]&&A[mid]==A[h]){
            l++,h--;
            continue;
        }

        if(A[l]<=A[mid]){
            if(A[l]<=k&&k<=A[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        else{
            if(A[mid]<=k&&k<=A[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        
    }
    return false;
}



