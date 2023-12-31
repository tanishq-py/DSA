// You are given a sorted integer array 'arr' of size 'n'.
// You need to remove the duplicates from the array such that each element appears only once.
// Return the length of this new array.
int removeDuplicates(vector<int> &arr, int n) {
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
