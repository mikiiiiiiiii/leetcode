//!!!map要初始化!!!find是O(1)!

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int lenr=ransomNote.size();
        int lenm=magazine.size();
        map<char, int> store;
        if(lenr>lenm){
            return false;
        }
        for(int i = 0; i < lenm; ++i){
            store[magazine[i]]+=1;
        }
        for(int i = 0; i < lenr; ++i){
            store[ransomNote[i]]-=1;
            if(store[ransomNote[i]]<0){
                return false;
            }
        }
        return true;
    }
};
