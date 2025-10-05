class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            // unexpected edge case
            if (nums.empty()) return 0;
    
            int current_streak = 1;
            int longest_streak = 1;
            
            sort(nums.begin(), nums.end());
            for(int i=1; i<nums.size(); i++)
            {
                if( nums[i] == nums[i-1] )
                {
                    continue;
                }
                if( nums[i] == nums[i-1]+1)
                {
                    current_streak ++ ;
                }
                else{
                    longest_streak=max(current_streak,longest_streak);
                    current_streak = 1;
                }
            }
            
            return max(longest_streak, current_streak);
        }
    };