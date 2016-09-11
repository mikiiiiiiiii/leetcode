class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
         int len1=nums1.size();
         int len2=nums2.size();
         unordered_map<int, int> store;
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
                     store[nums2[i]]=0;
                 }
             }
         }
         return result;
    }
};
