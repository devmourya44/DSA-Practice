class Solution {
public:
    double myPow(double x, int n) {
        // base case
        if(n==0)
        return 1;
        if(n==1)
        return x;
         if (n < 0)
       //if n is negative
          return (1 / myPow(x, -(n+1)) / x);
        // recursive relation
        double ans = myPow(x,n/2);
        // if n is even
        if(n%2==0){
            return ans*ans;
        }
      //if n is odd
        else{
            return x*ans*ans;
        }
    }
};
