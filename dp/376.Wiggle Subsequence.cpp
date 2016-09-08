class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int result1 = 0;
        int result2 = 0;
        if(nums.size() <= 1){
            return nums.size();
        }
        if(nums.size() == 2){
            if(nums[0]==nums[1]){
                return 1;
            }
            return 2;
        }

        //greedy
        bool increase;
        int prev = nums[0];
        result1 = 1;
        //situation 1
        //increase first
        increase = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(increase){
                if(nums[i] > prev){
                    result1 += 1;
                    prev = nums[i];
                    increase=!increase;
                }
                if(nums[i] < prev){
                    prev = nums[i];
                }
            }
            else{
                if(nums[i] < prev){
                    result1 += 1;
                    prev = nums[i];
                    increase=!increase;
                }
                if(nums[i] > prev){
                    prev = nums[i];
                }
            }
        }

        prev = nums[0];
        result2 = 1;
        //situation 2
        //decrease first
        increase = 0;
        for(int i = 1; i < nums.size(); ++i){
            if(increase){
                if(nums[i] > prev){
                    result2 += 1;
                    prev = nums[i];
                    increase=!increase;
                }
                if(nums[i] < prev){
                    prev = nums[i];
                }
            }
            else{
                if(nums[i] < prev){
                    result2 += 1;
                    prev = nums[i];
                    increase=!increase;
                }
                if(nums[i] > prev){
                    prev = nums[i];
                }
            }
        }

        return max(result1, result2);
    }
};
