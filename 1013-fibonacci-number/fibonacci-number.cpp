class Solution {
public:

    int solve(int n){
        int ans=0;
        if(n==0 || n==1){
            return n;
        }

        ans=solve(n-1)+solve(n-2);
        return ans;
    }

    int fib(int n) {
        int ans=solve(n);
        return ans;
    }
};