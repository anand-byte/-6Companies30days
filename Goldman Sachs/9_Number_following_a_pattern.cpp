string printMinNumberForPattern(string S){
        string res="";
        int n,i,j;
        n=S.size();
        for(i=1;i<=n+1;i++)
            res.push_back(i+'0');
        i=0;
        while(i<n)
        {
            if(S[i]=='D')
            {
                j=i;
                while(i<n && S[i]==S[i+1])
                    i++;
                    
                reverse(res.begin()+j,res.begin()+i+2);
            }
            i++;
        }
        return res; 
    }
