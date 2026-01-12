import heapq

class Solution:

	def findKthLargest(self, nums, k):

	    for i in range(len(nums)):

	        nums[i] = -nums[i] # Max Heap

	 

	    heapq.heapify(nums)

	 

	    for _ in range(k-1):

	        heapq.heappop(nums)

	 

	    return -heapq.heappop(nums)

		   
