int minOperations(int* nums, int numsSize) {
int i,f=1;
for(i=0;i<numsSize;i++)
if(nums[0]==nums[i])
f=0;
else
{
f=1;
break;
}
if(f==0)
return 0;
return 1;
}