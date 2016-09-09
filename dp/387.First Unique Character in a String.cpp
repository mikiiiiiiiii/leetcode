//总体来说，hash_map 查找速度会比map快，而且查找速度基本和数据数据量大小，
//属于常数级别;而map的查找速度是log(n)级别。并不一定常数就比log(n)小，hash
//还有hash函数的耗时，明白了吧，如果你考虑效率，特别是在元素达到一定数量级时，
//考虑考虑hash_map。但若你对内存使用特别严格，希望程序尽可能少消耗内存，
//那么一定要小心，hash_map可能会让你陷入尴尬，特别是当你的hash_map对象特别多时，
//你就更无法控制了，而且hash_map的构造速度较慢。

class Solution {
public:
    int firstUniqChar(string s) {
        int lens=s.size();
        int i,j;
        map<char, int> store;
        for(int i = 0; i < lens; ++i){
            store[s[i]]+=1;
        }
        for(int i = 0; i < lens; ++i){
            if(store[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
