//print name n times
vector<string> printNTimes(int n) {
	if(n<=0) return {};
	cout<<"Coding Ninjas ";
	return printNTimes(n-1);
}


