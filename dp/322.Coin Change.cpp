//time limit exceed
class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0){
            return 0;
        }
        sort(coins.begin(),coins.end());
        if(amount<coins[0]){
            return -1;
        }
        int temp = coins.size()-1;
        while(temp>=0){
            if(amount-coins[temp]==0){
                return 1;
            }
            int a = coinChange(coins, amount-coins[temp]);
            //cout << coins[temp]<<endl;
            if(a!=-1){
                return 1+a;
            }
            else{
                temp--;
            }
        }
        return -1;
    }
};
//
class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0){
            return 0;
        }
        //sort(coins.begin(),coins.end());

        vector<int> res;
        res.push_back(-1);
        for(int i = 1; i <= amount; ++i){
            int mins;
            mins = -1;
            for(int j = 0; j < coins.size(); ++j){
                if(i - coins[j] == 0){
                    mins=1;
                }
                if(i - coins[j] > 0){
                    if(res[i-coins[j]]!=-1){
                        if(mins==-1){
                            mins = res[i-coins[j]]+1;
                        }
                        else{
                            mins = min(mins, res[i-coins[j]]+1);
                        }
                    }
                }
            }
            res.push_back(min);
        }
        return res[amount];
    }
};
