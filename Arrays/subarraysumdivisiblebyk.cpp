class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;

        
        unordered_map<int, int> m;// Stores the frequency of each prefix sum remainder.
      
        m[0] = 1; // Initialize remainder 0 with frequency 1 to handle subarrays starting from index 0.

        for (int i = 0; i < n; i++) {
            sum += nums[i];// Update the running prefix sum.
          
            if (m.find(((sum % k) + k) % k) != m.end()) // If the current remainder has been seen before all previous occurrences form subarrays whosesum is divisible by k.
                count += m[((sum % k) + k) % k];

            m[((sum % k) + k) % k]++; // Increment the frequency of the current remainder.
        }
        return count;
    }
};
