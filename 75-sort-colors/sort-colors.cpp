class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroC=0;
        int oneC=0;
        int twoC=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroC++;
            }
            else if(nums[i]==1){
                oneC++;
            }
            else{
                twoC++;
            }

        }
        int i=0;
        while(zeroC--){
            nums[i]=0;
            i++;
        }
        while(oneC--){
            nums[i]=1;
            i++;
        }
        while(twoC--){
            nums[i]=2;
            i++;
        }

    }
};