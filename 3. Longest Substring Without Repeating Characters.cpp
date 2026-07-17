class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int>mp;
        int low =0;
        int ans =0;

        for(int high =0 ; high<s.size(); high++){
            mp[s[high]]++;

            while(mp[s[high]] > 1){
                mp[s[low]]--;
                low++;
            }
            ans = max(ans,high-low +1);

        }
        return ans;
    }
};
