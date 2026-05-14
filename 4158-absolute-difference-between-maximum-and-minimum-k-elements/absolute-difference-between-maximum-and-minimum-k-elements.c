int absDifference(int* nums, int numsSize, int k) {
int i,j,c,max=0,min=0,diff;
for(i=0;i<numsSize-1;i++)
for(j=i+1;j<numsSize;j++)
if(nums[i]>nums[j])
{
c=nums[i];
nums[i]=nums[j];
nums[j]=c;
}
for(i=1;i<=k;i++)
max=max+nums[numsSize-i];
for(i=0;i<k;i++)
min=min+nums[i];
diff=abs(max-min);
return diff;
}