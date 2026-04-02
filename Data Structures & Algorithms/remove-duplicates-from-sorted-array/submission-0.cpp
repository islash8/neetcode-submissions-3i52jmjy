class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // Check if empty
        if(nums.empty())
        {
            return 0;
        }

        
        // Init variables
        int k = 1; // index of unique element

        // Main logic
        for(int i=1; i < nums.size(); i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        // return
        return k;
    }
};