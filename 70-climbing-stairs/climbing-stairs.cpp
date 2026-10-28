class Solution {
public:
unordered_map<int , int>mp;
    int climbStairs(int n) {
        if (n == 1){
            return 1;
        }
        if (n == 2){
            return 2;
        }
            else {
                if(mp.find(n) != mp.end()){
                    return mp[n];
                }
                int ans = climbStairs(n-1) + climbStairs(n-2);
                mp[n] = ans;
                return ans;
            }
    }
};