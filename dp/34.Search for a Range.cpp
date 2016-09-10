class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int len=nums.size();
        if(target>nums[len-1]||target<nums[0]){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int low=0;
        int high=len;
        int guess=-1;
        int flag=false;
        int prevguess;
        //find lower range first
        while(low<high){
            prevguess=guess;
            guess=low+(high-low)/2;
            if(guess==prevguess){
                break;
            }
            if(nums[guess]==target){
                flag=true;
                high=guess;
            }
            if(nums[guess]<target){
                low = guess;
            }
            if(nums[guess]>target){
                high=guess;
            }
        }
        if(nums[0]==target){
            flag=true;
            high=0;
        }
        if(!flag){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        result.push_back(high);
        low=0;
        high=len-1;
        guess=-1;
        while(low<high){
            prevguess=guess;
            guess=low+(high-low)/2;
            if(guess==prevguess){
                break;
            }
            if(nums[guess]==target){
                low=guess;
            }
            if(nums[guess]<target){
                low = guess;
            }
            if(nums[guess]>target){
                high=guess;
            }
        }
        if(nums[len-1]==target){
            low=len-1;
        }
        result.push_back(low);
        return result;
    }
};
