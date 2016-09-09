// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        if(!isBadVersion(n-1)){
            return n;
        }
        int guess;
        int result;
        while(low<high){
            guess=low+(high-low)/2;
            result=isBadVersion(guess);
            if(result){
                if(!isBadVersion(guess-1)){
                    return guess;
                }
                high=guess;
            }
            else{
                if(isBadVersion(guess+1)){
                    return guess+1;
                }
                low=guess;
            }
        }
        return 0;
    }
};
