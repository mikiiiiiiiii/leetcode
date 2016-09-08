class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int diglen = digits.size();
        int carry = 1;
        int tempsum;
        for(int i = 0; i < diglen; ++i){
            tempsum = digits[i] + carry;
            if(tempsum>9){
                tempsum-=10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            digits[i]=tempsum;
        }
        if(carry){
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
