class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> newArr(nums.size() * 2);

       for(int i=0; i < (nums.size()) ; i++)
        {
        newArr[i] = nums[i];
        newArr[i + nums.size()] = nums[i];
        }
        

        return newArr;
    }
};