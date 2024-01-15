//decimal to binary
int binaryToDecimal(int n) {
    int ans = 0;
    int i = 0;

    while (n != 0) {
        int digit = n % 10;
        ans = ans + (digit * pow(2, i));
        n = n / 10;
        i++;
    }

    return ans;
}


//binary to decimal
int ans=0;
int i=0;
while(n!=0){
  int bit= n&1;
  if(bit==1){
  ans=ans + pow(2,i);
  }
  n>>1;
  i++;
}

  
