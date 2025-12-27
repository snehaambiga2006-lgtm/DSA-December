class Solution:
    def trap(self, height):
        n = len(height)
        

        lmax = 0
        rmax = 0

        max_l = [0] * n
        max_r = [0] * n

      
        for i in range(n):
            j=-i-1
            max_l[i]=lmax
            max_r[j]=rmax

            lmax=max(lmax,height[i])
            
            rmax=max(rmax,height[j])

        total = 0
        for i in range(n):
            water_level = min(max_l[i], max_r[i])
            above_water = water_level - height[i]

            if above_water > 0:
                total += above_water

        return total
