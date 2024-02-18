class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int max=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count+=1;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        return max;
    }
};