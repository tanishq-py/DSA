#include<bits/stdc++.h>
using namespace std;

int main(){
    //sorting
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    sort(arr, arr+n);

    vector<int> vec(5,0);
    for(int i=0;i<5;i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());
    sort(vec.begin()+1, vec.begin()+4); //sort position 2 to 4

    
    //reverse
    reverse(arr, arr+3);
    reverse(vec.begin(), vec.begin()+3);

    //max
    int el = *max_element(arr, arr+n);
    int el= *max_element(vec.begin(),vec.end());
    cout<<el;
    //similarly min

    //sum
    int sum= accumulate(arr, arr+n, 0); //(start, end, initial sum)


    //count
    int cnt= count(arr,arr+n, 1);


    //find first occurrence
    auto it= find(arr,arr+n,2); //return iterator pointing to the first occurrence of 2 or else return end() if not present
    int ind= it- arr;


    //binarysearch
    //only works in a sorted array, log n
    bool res= binary_search(arr, arr+n, 2);
    bool res = binary_search(vec.begin(), vec.end(), 8);

    //lower_bound
    auto it= lower_bound(arr, arr+n, 4); //return iterator pointing to first occurrence of element which in not less than x

    //upper_bond
    auto it= upper_bound(arr, arr+n, 10); //return iterator pointing to first occurrence of element which in just greater than x

}
