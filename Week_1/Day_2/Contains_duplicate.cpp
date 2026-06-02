LeetCode: Contains_Duplicate
  https://leetcode.com/problems/contains-duplicate/submissions/2019614288/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return false;
    unordered_set<int> s;
    for(int num:nums){
        s.insert(num);
    }
    if(s.size()==nums.size()){
        return false;
    }
    return true;
        
    }
};
