class Solution {
public:
    void moveZeroes(vector<int>& nums) { 

         int l =0;
         int r = nums.size()-1;
         int mid =0;
         while(mid<=r){
            if(nums[mid]!=0){
                l++;
            }
            mid++;


         } 
         while(l<r){
            nums[l]=0;
            l++;
         }
 
        }
};
