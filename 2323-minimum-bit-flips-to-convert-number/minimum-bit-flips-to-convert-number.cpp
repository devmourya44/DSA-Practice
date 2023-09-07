class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int k=start^goal;
        while(k){
            if(k&1)count++;
            k=k>>1;
        }
        return count;
    }
};