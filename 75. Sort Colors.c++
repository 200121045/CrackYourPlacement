class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int j = nums.size()-1;
//         int mid=0;
//  while(mid<=j){
//         switch(nums[mid]){
//             case 0:
//             swap(nums[i],nums[mid]);
//             i++;
//             mid++;
//             break;
//             case 2:
//             swap(nums[j], nums[mid]);
//             j--;
//             break;
//             case 1:
//             mid++;
//             break;
 
int mid =0;
while(mid<=j){
    switch(nums[mid]){
        case 0:
        swap(nums[l] , nums[mid]);
        l++;
        mid++;
        break;
        case 2:
        swap(nums[j] , nums[mid]);
        j--;
        break;
        case 1:
        mid++;
        break;
    }
}
    }
};
