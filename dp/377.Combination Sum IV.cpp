class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if(target == 0){
            return 0;
        }
        //sort(coins.begin(),coins.end());

        vector<int> res;
        res.push_back(0);
        for(int i = 1; i <= target; ++i){
            int temp;
            temp = 0;
            for(int j = 0; j < nums.size(); ++j){
                if(i - nums[j] == 0){
                    temp+=1;
                }
                if(i - nums[j] > 0){
                    if(res[i-nums[j]]!=0){
                        temp+=res[i-nums[j]];
                    }
                }
            }
            res.push_back(temp);
        }


        return res[target];
    }
};
