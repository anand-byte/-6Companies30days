//problemLink: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

ull getNthUglyNo(int n) {
	    // code here
	   set<ull>s;
	   ull res;
	   s.insert(1);
	   for(int i=0;i<n;i++){
	       res=*s.begin();
	       s.erase(s.begin());
	       s.insert(res*2);
	       s.insert(res*3);
	       s.insert(res*5);
	   }
	   return res;
	}
