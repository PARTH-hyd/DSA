class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0; // Initialize two pointers: 
     
        int j = n - 1; // i starts from the beginning, j starts from the end.

       
        while (i < j) { // Continue until the two pointers meet.

           
            
            if (numbers[i] + numbers[j] > target) { // If the current sum is greater than the target,
                j--; // move the right pointer left to reduce the sum.
            }

           
          
            else if (numbers[i] + numbers[j] < target) { // If the current sum is smaller than the target,
                i++;  // move the left pointer right to increase the sum.
            }

           
            else { // Target sum found.
                break;
            }
        }

        
        return {i + 1, j + 1};// Return 1-based indices as required by the problem.
    }
};
