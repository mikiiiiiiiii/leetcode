class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(),s.end());
        return s;
    }
};

//stl reverse()可以用在string上
