#include "stdio.h"
#include <stdlib.h>




int* twoSum(int* nums, int numsSize, int target);

int main(){
    
    int* nums,returnSize;
    int numsSize,target,i;
    int* res;

    printf("PLS input numsSize:");
    scanf("%d",&numsSize);
    nums = (int*) malloc(sizeof(int)*numsSize);
    for(i=0;i<numsSize;i++){
        printf("PLS input nums[%d]:",i+1);
        scanf("%d",nums+i);
    }
    printf("PLS input target:");
    scanf("%d",&target);
    printf("PLS input returnSize:");
    scanf("%d",&returnSize);
    
    res=twoSum(nums,numsSize,target);
    
    if((*res+*(res+1))==0)printf("No Answer\n");
    else{printf("the answer is [%d,%d]\n",*res,*(res+1));}

    return 0;
}



/*
int* twoSum(int* nums, int numsSize, int target){
    
    int* result=(int*) malloc(sizeof(int)*2);
    int i,j;
    
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            int pre=*(nums+i);
            int last=*(nums+j);
            int sum = pre+last;
            
            if(sum==target){
                *result=i;
                *(result+1)=j;
            }
        }
    }
    
    return result;
}*/
//Runtime:225 ms    Memory:6.4 MB
int* twoSum(int* nums, int numsSize, int target){
    
    int* result=(int*) malloc(sizeof(int)*2);
    int i,j;
    
    for(i=0;i<numsSize;i++){
        int sum = target -*(nums+i);
        
        for(j=i+1;j<numsSize;j++){
            int last=*(nums+j);
            
            if(sum==last){
                *result=i;
                *(result+1)=j;
            }
        }
    }
    
    return result;
}
//Runtime:136 ms    Memory:6.3 MB
//儘量減少內圈的作業,可以減少運算次數
