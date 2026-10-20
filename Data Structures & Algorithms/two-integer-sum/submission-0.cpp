class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        //if(nums.size() == 2) return vector<int> t = {0,1};

        for(int i = 0; i<nums.size(); i++){


            for(int j = i+1; j<nums.size(); j++){

                if(nums[i]+nums[j] == target) result.insert(result.begin(),{i,j});

            }
        }

        return result;


        
    }
};
