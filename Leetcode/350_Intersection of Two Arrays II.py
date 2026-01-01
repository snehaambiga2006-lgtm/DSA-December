from collections import Counter
class Solution(object):
    def intersect(self, nums1, nums2):
        freq_count=Counter(nums1)
        res=[]
        for num in nums2:
            if freq_count[num]>0:
                res.append(num)

                freq_count[num]-=1
        return res
            
