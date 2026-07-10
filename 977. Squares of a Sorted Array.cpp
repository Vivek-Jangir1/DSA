class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        vector<int> ans;
        while(i < n){
            int square = nums[i]*nums[i];
            ans.push_back(square);
            i++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
