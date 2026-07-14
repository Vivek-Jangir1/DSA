class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size();
        int low =0 ;
        int minLen = INT_MAX;

        int sum =0;

        for(int high =0; high<n; high++){
            sum+=nums[high];

            while(sum>=target){
                minLen = min(high - low +1,minLen);
                sum-= nums[low];
                low++;
            }
        }
        if(minLen == INT_MAX){
            return 0;
        }
        
        return minLen;
    }
};
