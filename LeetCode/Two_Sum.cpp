class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, vector<int> > mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            if(mp[target - nums[i]].size() > 0) {
                if(nums[i] == target / 2) {
                    if(mp[target - nums[i]].size() >= 2) {
                        ans.push_back(mp[target - nums[i]][0]);
                        ans.push_back(mp[target - nums[i]][1]);
                        break;                        
                    }                    
                } else {
                    ans.push_back(i);
                    ans.push_back(mp[target - nums[i]][0]);
                    break;
                }
            }
        }
        return ans;
    }
};
