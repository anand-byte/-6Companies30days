    if(s1+s2!=s2+s1)
            return "";
        return s1.substr(0,__gcd(s1.size(),s2.size()));
    }
