class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int lena=a.size();
        int lenb=b.size();
        int carry = 0;
        int i = 1;
        int tempa, tempb, tempsum;
        char temp;
        while(lena-i>=0 && lenb-i>=0){
           tempa = a[lena-i]-'0';
           tempb = b[lenb-i]-'0';
           tempsum = tempa+tempb+carry;
           if(tempsum>1){
               carry = 1;
               tempsum-=2;
           }
           else{
               carry = 0;
           }
           temp = tempsum +'0';
           result=result + temp;
           i+=1;
        }
        while(lena-i>-1){
            tempa = a[lena-i]-'0';
            tempsum = tempa+carry;
            if(tempsum>1){
               carry = 1;
               tempsum-=2;
           }
           else{
               carry = 0;
           }
           temp = tempsum+'0';
           result=result + temp;
           i+=1;
        }
            while(lenb-i>-1){
                tempb = b[lenb-i]-'0';
                tempsum = tempb+carry;

                if(tempsum>1){
                    carry = 1;
                    tempsum-=2;
                }
                else{
                    carry = 0;
                }
                temp = tempsum+'0';
                result=result + temp;
                i+=1;
            }

        if(carry){
            result =result + "1";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
