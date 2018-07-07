int largestNumber(int n) {
int ans=9;
    if(n>=1 && n<=9){
        for(int i=1;i<n;i++)
        {
            ans=ans*10;
            ans+=9;
        }
   
    }
     return ans;
}
