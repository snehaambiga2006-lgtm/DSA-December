int maxArea(int* height, int heightSize) {
    int l=0;
    int r=heightSize-1;
    int maxArea = 0;

    while(l<r){
        int w=r-l;
        int h=(height[l]<height[r]?height[l]:height[r]);
        int area= w*h;
        
        if(area>maxArea){
            maxArea=area;
        }
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return maxArea;
    
}
