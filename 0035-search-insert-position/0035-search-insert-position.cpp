class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x=0;
            for(int i=0;i<nums.size();i++){
                if(target>nums[i]){
                    x=i+1;
                    continue;
                }
                else{
                    x=i;
                    break;
                }  
        } 
    return x;
    } 
};