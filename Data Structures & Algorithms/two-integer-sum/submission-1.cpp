class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        //if(nums.size() == 2) return vector<int> t = {0,1};

        unordered_map<int , int>mp;

        for(int i=0; i<nums.size(); i++){

            int diff = target-nums[i];
            if(mp.contains(diff)){
                result.assign({mp[diff],i});
            }
            mp[nums[i]] = i;
        }
        return result;


        
    }
};
