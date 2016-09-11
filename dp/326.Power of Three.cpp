class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        int max3 = 1162261467;
        return (!(max3%n));
    }
};
