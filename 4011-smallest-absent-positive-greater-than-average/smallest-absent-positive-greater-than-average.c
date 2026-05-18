int smallestAbsent(int* nums, int numsSize) {
int i,s=0,j,f,max;
float avg;
for(i=0;i<numsSize;i++)
s=s+nums[i];
avg=(float)s/numsSize;
max=nums[0];
for(i=1;i<numsSize;i++)
if(nums[i]>max)
max=nums[i];
if(max<0)
max=0;
for(i=1;i<=max+1;i++)
{
if(i>avg)
f=0;
if(f==0)
for(j=0;j<numsSize;j++)
if(i==nums[j])
{
f=1;
break;
}
if(f==0)
{
return i;
break;
}
}
return 0;
}