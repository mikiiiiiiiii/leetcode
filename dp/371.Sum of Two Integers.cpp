class Solution {
public:
    int getSum(int a, int b) {
        int sumand=a&b;
        int sumxor=a^b;
        int newand, newxor;
        while(sumand){
            sumand = sumand << 1;
            newand = sumand&sumxor;
            newxor = sumand^sumxor;
            sumand = newand;
            sumxor = newxor;
        }
        return sumxor;
    }
};
