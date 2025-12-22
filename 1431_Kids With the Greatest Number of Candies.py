class Solution:
    def kidsWithCandies(self, candies, extraCandies) :
        result = []
        highest_candy = max(candies)
        for i in range(len(candies)):            
            result.append(candies[i] + extraCandies >= highest_candy)
        return result
