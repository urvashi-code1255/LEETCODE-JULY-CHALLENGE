class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map < int , int > m ;
        
        for(auto i : nums) // storing numbers with their count in a map.
            m[i]++ ;
        
        vector<pair<int , int>>v ;
        
        for(auto i : m) // storing the number count pairs in vector to sort them .
            v.push_back({i.second , i.first}) ; 
            
        // sorted in descending order so that we can put first k numbers with highest frequency in our answer
        // as the vector sort the elements according to first thats why we put frequencies in first of the pair 
		// so that it will sort on the basis of frequencies.
        sort(v.begin() , v.end() , greater<>()) ; 
        
        vector<int>ans ;
        
        for(auto i : v)
        {
            ans.push_back(i.second) ; 
            if(ans.size() == k)
                break;
        }
        return ans ;
    }
};
