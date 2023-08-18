class Solution {
public:
    long calculateHours(vector<int>& piles, int speed)
    {
        long spentHours = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            spentHours += piles[i] / speed;
            if (piles[i] % speed != 0)
            {
                spentHours++;
            }
        }
        return spentHours;
    }

    int getMax(vector<int> piles)
    {
        int maxPile = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            maxPile = max(piles[i], maxPile);
        }

        return maxPile;
    }

    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int left = 1; 
        int right = getMax(piles); 
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long hoursRequired = calculateHours(piles, mid);
            if (hoursRequired <= h)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};