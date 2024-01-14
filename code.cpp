class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int count;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            int min=nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};
