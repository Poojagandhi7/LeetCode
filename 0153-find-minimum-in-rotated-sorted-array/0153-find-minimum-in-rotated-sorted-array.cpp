class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n = nums.size();
        int high=n-1;
        int mid;
        int mini = INT_MAX;
        
        while(low<=high){
            mid = (low+high)/2;

            // left sorted

            if(nums[low] <= nums[mid]){
                mini = min(mini,nums[low]);
                low=mid+1;
            }
            
            else{
                mini = min(mini,nums[mid]);
                    
                high=mid-1;
                
            }
            
        }
        return mini;
    }
};