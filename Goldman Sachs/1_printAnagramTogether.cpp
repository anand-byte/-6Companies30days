 vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n=string_list.size();
	    vector<vector<string>> result;
	    unordered_map<string,vector<string>>mp;
	    for(int i=0;i<n;i++){
	        string s=string_list[i];
		   sort(s.begin(),s.end());
		   mp[s].push_back(string_list[i]);
	    }
	    
	    for(auto it:mp){
		  result.push_back(it.second);
		    
		
	    }
	return result;
