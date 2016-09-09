// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(guess(n)==0){
            return n;
        }
        int high=n;
        int low=1;
        int result;
        int guessnum;
        while(low<high){
            guessnum = low+(high-low)/2;//!!!!!!!!!!!!!!!!!!不这么写会越界！！！！
            cout<<guessnum<<endl;
            result=guess(guessnum);
            if(result==0){
                return guessnum;
            }
            if(result==-1){
                high=guessnum;
            }
            if(result==1){
                low=guessnum;
            }
        }
        return 0;
    }
};
