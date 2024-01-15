int countDigits(int n){
	int cnt=0;
	int org= n;
	while(n!=0){
		int digit= n%10;
		if(digit!=0 && org % digit == 0) cnt++;
		n=n/10;
	}
	return cnt;	
}
