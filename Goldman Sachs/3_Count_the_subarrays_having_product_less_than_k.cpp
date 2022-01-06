int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(n<=1){
            if(a[0]<k)return 1;
            return 0;
            
        }
        int r=0,l=0,count=0;
        long long prod=1;
        while(r<n){
            prod*=a[r];
            while(prod>=k) prod/=a[l++];
            count+=1+(r-l);
            r++;
        }
        return count;
    }
