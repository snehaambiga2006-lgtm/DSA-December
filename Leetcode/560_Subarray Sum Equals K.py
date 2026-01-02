class Solution:
    def subarraySum(self, nums, k):
        count = 0                    
        curr_sum = 0                 
        
        prefix_map = {0: 1}         

        for num in nums:
            curr_sum += num         
            if curr_sum - k in prefix_map:
                count += prefix_map[curr_sum - k]
            if curr_sum in prefix_map:
                prefix_map[curr_sum] += 1
            else:
                prefix_map[curr_sum] = 1

        return count
