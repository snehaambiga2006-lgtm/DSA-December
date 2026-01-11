class Solution(object):
    def searchRange(self, nums, target):
        
        def FirstIndex(nums,target):
            left,right=0,len(nums)-1
            
            while left <= right:
                mid= (left + right) // 2
                if nums[mid] < target:
                    left = mid + 1
                else:
                    right=mid - 1
            return left

        def LastIndex(nums,target):
            
            left,right=0,len(nums)-1
            
            while left <= right:
                mid = (left + right) // 2
                if nums[mid] <= target:
                    left = mid + 1
                else:
                    right = mid - 1
            return right

        left = FirstIndex(nums,target)
        right = LastIndex(nums, target)

        if left<=right and left < len(nums) and nums[left]==target and nums[right]==target:
            return [left,right]
        else:
            return [-1,-1]




        
