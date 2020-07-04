class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int>temp(8);
        
        // as the cycle is repeating after 14 days , so if no of days is multiple of 14 then we have to consider  
	//only upto first 14 days because after that ,values will repeat .
	    
        N=(N%14 == 0)?14:N%14;  
        
        while(N--)
        {
            for(int i = 1 ; i < 7 ; i++)  
            {
                temp[i]=(cells[i-1]==cells[i+1])?1:0; // checking equality of adjacent cells.
            }
            cells = temp;
        }
        return cells;
    }
};
