class Solution {
public:
    int rob(vector<int>& nums) {
        //
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return nums[0];
        }
        int fn2 = nums[0];
        int fn1 = nums[1];
        int pfn2, pfn1, pfn;

        if(nums.size() == 2){
            return max(fn2, fn1);
        }
        int fn = max(fn1, (fn2+nums[2]));
        if(nums.size() == 3){
            fn = max(fn1, fn);
            return fn;
        }
        for(int i = 3; i < nums.size(); ++i){
            pfn = fn;//2
            fn = max(fn, (fn1 + nums[i]));
            fn = max(fn, (fn2 + nums[i]));
            fn2 = fn1;
            fn1 = pfn;
        }
        return fn;
    }
};
