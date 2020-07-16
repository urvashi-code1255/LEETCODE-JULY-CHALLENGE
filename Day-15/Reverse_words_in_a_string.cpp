class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string a = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == ' ') 
            {
                if(a.size()) 
                    v.push_back(a);
                a = "" ;
            }
            else
            {
                a += s[i] ;
                if(i == s.size() - 1) 
                    v.push_back(a) ;
            }
        }
        
        string ans = "" ;
        for(int i = v.size() - 1 ; i >= 0 ; i--)
        {
            ans += v[i] ;
            if(i != 0) 
                ans += ' ' ;
        }
        return ans ;
    }
};
