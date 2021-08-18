class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
     if((nums.size()==0)){
         return 0;
     }
        
       int count = 0;   //will hold the indices of unique numbers/slow moving index
        
       for(int i=0; i<nums.size(); ++i){    //i is the current/fast moving index
            if(nums[i] != nums[count]){
                count++;
                nums[count] = nums[i];
            }
       }
        return count+1;
    }
};
 