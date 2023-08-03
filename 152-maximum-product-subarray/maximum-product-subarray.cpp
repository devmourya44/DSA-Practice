class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
	    long long maxL = LLONG_MIN;
	    long long maxR = LLONG_MIN;
	    long long p = 1;
	    for (int i = 0; i < n; i++) {
	        p *= nums[i];
	        maxL = max(maxL, p);
	        if (p == 0) {
	            p = 1;;
	        }
	    }
	    p = 1;
	    for (int i = n-1; i >= 0; i--) {
	        p *= nums[i];
	        maxR = max(maxR, p);
	        if (p == 0) {
	            p = 1;
	        }
	    }
	    return max(maxL,maxR);
	
    }
};