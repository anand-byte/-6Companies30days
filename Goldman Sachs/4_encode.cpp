   vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int l=0,n=string_list.size(),m=string_list[0].length(),count=n;
	    vector<vector<string>> result;
	    vector<string> v=string_list;
	    for(int i=0;i<n;i++){
		   sort(v[i].begin(),v[i].end());
	    }
	    
	    for(int i=0;i<n;i++){
		    vector<string> temp;
		    for(int j=0;j<n;j++){
		    	if(v[i]==v[j] && count>0){
			    	temp.push_back(string_list[j]);
			    	count--;
			    	
		    	}
			    	
		    }
		    if(count>0)
		         result.push_back(temp);
		    
		
	    }
	return result;
  }
