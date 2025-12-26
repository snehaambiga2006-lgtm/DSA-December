int majorityElement(int* nums, int numsSize) {
    int element=0;
    int count=0;

    for(int i=0; i<numsSize;i++){
        if(count==0){
            element=nums[i];
        }

        if(nums[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
    
}
