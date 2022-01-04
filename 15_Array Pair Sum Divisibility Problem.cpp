bool canPair(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        
	map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[nums[i]%k]++;
	}
	
	for(auto it:mp){
	    int diff=k-(it.first);
	    if(mp[it.first]!=mp[diff])
	    return false;
	    else if (it.first==0){
	        if(mp[0]&1) return false;
	    }
	    
	    
	}
	return true;
    }
