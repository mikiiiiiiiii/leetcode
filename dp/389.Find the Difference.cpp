class Solution {
public:
    char findTheDifference(string s, string t) {
        char l;
        int lens=s.size();
        int lent=t.size();
        for(int i = 0; i < lens; ++i){
            l = l ^ s[i];
        }
        for(int i = 0; i < lent; ++i){
            l = l ^ t[i];
        }
        return l;
    }
};
