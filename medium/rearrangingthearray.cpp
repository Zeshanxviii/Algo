class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int>pos;
            vector<int>neg;
            vector<int>A;
    
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]<0)
                    neg.push_back(nums[i]);
                else
                    pos.push_back(nums[i]);
                
            }
    
            //pushing value alternatively
            for(int i=0; i<pos.size();i++)
            {
                A.push_back(pos[i]);
                A.push_back(neg[i]);
            }
    
            return A;
        }
    };