class Solution {
public:
    int climbStairs(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        int fn = 2;
        int fn1 = 1;
        for(int i = 3; i <= n; ++i){ //caution the border
            int pfn = fn;
            fn = fn + fn1;
            fn1 = pfn;
        }
        return fn;
    }
};
