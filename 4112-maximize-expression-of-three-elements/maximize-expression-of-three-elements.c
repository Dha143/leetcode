int maximizeExpressionOfThree(int* nums, int numsSize) {
int i,j,c,a,b;
for(i=0;i<numsSize;i++)
for(j=i+1;j<numsSize;j++)
if(nums[i]>nums[j])
{
c=nums[i];
nums[i]=nums[j];
nums[j]=c;
}
a=nums[numsSize-1];
b=nums[numsSize-2];
c=nums[0];
return a+b-c;
}