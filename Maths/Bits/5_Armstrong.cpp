//An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
//o(N)
bool checkArmstrong(int n){
	int org=n;
	int ams=0;
	while(n!=0){
		int digits= n%10;
		ams = ams + pow(digits, 3);
		n=n/10;
	}
	if (ams==org) return true;
	return false;
}



