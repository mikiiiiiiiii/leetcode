What if the given array is already sorted? How would you optimize your algorithm?
What if nums1's size is small compared to nums2's size? Which algorithm is better?
What if elements of nums2 are stored on disk, and the memory is limited such that
you cannot load all elements into the memory at once?
sorted：读一截二分搜索一截
非sorted：读一截扔map一截

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> store;
        int len1=nums1.size();
        int len2=nums2.size();

        for(int i = 0; i < len1; ++i){
            if(!store.count(nums1[i])){
                store[nums1[i]]=0;
            }
            store[nums1[i]]+=1;
        }

        for(int i = 0; i < len2; ++i){
            if(store.count(nums2[i])){
                if(store[nums2[i]]>0){
                    result.push_back(nums2[i]);
                    store[nums2[i]]-=1;
                }
            }
        }
        return result;
    }
};
