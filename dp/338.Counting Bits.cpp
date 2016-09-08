class Solution {
public:
    //0 //0
    //1 //1
    //2 //10
    //3 //11
    //4 //100
    //5 //101
    //6 //110
    //7 //111
    //8 //1000
    //9 //1001
    //10//1010
    //11//1011
    vector<int> countBits(int num) {
        vector<int> result;
        int count = 1;
        int temp;
        result.push_back(0);
        for(int i = 1; i <= num; ++i){
            if((i-count)==count){
                count=count*2;
            }
            temp = 1 + result[i-count];
            result.push_back(temp);
        }
        return result;
    }
};
