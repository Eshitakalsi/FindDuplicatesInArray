class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int>newNums;
        int size = nums.size();
        map<int,int>duplicate_map;
        for(int i=0; i<size; i++){
            if(duplicate_map.find(nums[i])!=duplicate_map.end()) {
                //key exist and hence update the dulpicate count;
                duplicate_map[nums[i]]++;
        } else {
                //it doesn't exist in map
                duplicate_map.insert(pair<int,int>(nums[i],1));
                //single count of current number
        }
        }
        for(map<int,int>::iterator it = duplicate_map.begin(); it != duplicate_map.end(); ++it){
            if(it->second == 2){
                newNums.push_back(it->first);
            }
        }
        return newNums;
    }
};
