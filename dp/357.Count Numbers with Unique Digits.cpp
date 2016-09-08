class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int> res;
        int result = 0;
        res.push_back(10);
        if(n==0){
            return 1;
        }
        if(n==1){
            return 10;
        }
        int temp = 9;
        if(n>9){
            n=9;
        }
        for(int i = 1; i <= n; ++i){
            temp*=(9-i+1);
            res.push_back(temp);
        }
        for(int i = 0; i < n; ++i){
            result+=res[i];
        }
        return result;
    }
};
