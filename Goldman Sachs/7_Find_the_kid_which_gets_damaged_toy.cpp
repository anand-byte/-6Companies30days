int findPosition(int n , int m , int k) {
        if(n==1)
        return 1;
        int ans=((m%n)+(k-1));
        if(ans!=n)
        ans%=n;
        return ans;
    }
