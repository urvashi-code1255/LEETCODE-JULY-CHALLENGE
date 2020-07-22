class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1 , j = b.length() - 1 , carry = 0 ;
        string str="";
        while(i >= 0 || j >= 0 || carry)
        {
            int sum = ((i >= 0) ? (a[i] - '0') : 0) + ((j >= 0) ? (b[j] - '0') : 0) + carry ;
            carry = sum/2 ;
            str = char((sum % 2) + '0') + str;
            i--; j--;
        }
        return str;
    }
};
