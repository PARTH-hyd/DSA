// Solution to 3sum 





class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans; //answer vector
        sort(nums.begin(),nums.end());//sort the given nums vector in order to avoid duplicate
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;// skip every duplicate
            int j=i+1;// intialize j and k
            int k=n-1;
            while(j<k){// while j is strictly less than k
                int sum=nums[i]+nums[j]+nums[k]; //compute sum
                if(sum<0) j++;//check is sum is less if so then we must increase sum->increase j
                else if(sum>0) k--;//if greater not then we must decrease sum
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});//we push back the answer
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;//skip duplicates
                    while(j<k && nums[k]==nums[k+1]) k--;//skip duplicates
                }
            }
        }

        return ans;//return ans vector
    }
};
