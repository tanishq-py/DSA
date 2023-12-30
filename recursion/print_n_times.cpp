//print name n times
vector<string> printNTimes(int n) {
	if(n<=0) return {};
	cout<<"Coding Ninjas ";
	return printNTimes(n-1);
}


//print 1 to n
vector<int> printNos(int x) {
    static int i = 1;  // Make i static to persist its value across calls
    if (x <= 0) {
        return {};
    }
    cout << i << " ";
    i++;  // Increment after printing
    return printNos(x - 1);
}


