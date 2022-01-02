bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size()) return false;
        string s=s1+s1;
        for(int i=0;i<s1.size();i++){
            if(s2==s.substr(i,s2.length())) return true;
        }
        return false;
    }
