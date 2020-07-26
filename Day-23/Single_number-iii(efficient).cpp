class Solution {
public:
    vector<int> singleNumber(vector<int>& a ) {
        
    int *x= new int[sizeof(int)];
    int *y= new int[sizeof(int)];
        
    int XOR=a[0];//hold xor of all elements of array..
	int set_bit_no;//will have only one set bit of XOR..
        
	*x=0,*y=0;
	
	for(int i=1;i<a.size();i++)
	XOR^=a[i];
	
	//get rightmost bit int set_bit_no..
	set_bit_no =XOR& ~(XOR-1);
	
	//now divide elements in two subsets by comparing rightmost bit of xor with bit at same position in each element..
	for(int i=0;i<a.size();i++)
	{
		if(a[i]&set_bit_no)
		*x=*x^a[i];//xor of first set
		else
		*y=*y^a[i];//xor of second set..
    }
        return {*x,*y};
    }
};
