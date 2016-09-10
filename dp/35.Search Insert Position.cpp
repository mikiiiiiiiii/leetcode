class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int low=0;
        int high=len-1;
        int guess;
        bool flag=false;
        //注意边界！！！！！！！
        if(target<=nums[0]){
            return 0;
        }
        if(target>nums[len-1]){
            return len;
        }
        while(low<high){
            guess=low+(high-low)/2;
            if(guess==low){
                break;
            }
            cout<<low<<' '<<high<<endl;
            if(nums[guess]<target){
                if(flag&&guess==high-1){
                    break;
                }
                low=guess;
            }
            if(nums[guess]>target){
                high=guess;
            }
            if(nums[guess]==target){
                flag=true;
                high=guess;
            }
        }
        return high;
    }
};
