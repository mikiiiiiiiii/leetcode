class Solution {
public:
    int integerBreak(int n) {
        //3 3 2 - 18  4 4 - 16
        int result;
        result = 1;
        if(n == 2){
            return 1;
        }
        if(n == 3){
            return 2;
        }
        if(n == 4){
            return 4;
        }
        int newn = n;
        while(newn > 4){
            newn -=3;
            result *=3;
        }
        result *= newn;
        return result;
    }
};
