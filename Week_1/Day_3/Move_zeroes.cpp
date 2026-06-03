LeetCode: Move Zeroes
https://leetcode.com/problems/move-zeroes/submissions/2015116141/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
            }
           
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                arr.push_back(0);

            }
            }
         nums=arr;
     
                
    }
};
