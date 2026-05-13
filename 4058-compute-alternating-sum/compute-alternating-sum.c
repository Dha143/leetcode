int alternatingSum(int* nums, int numsSize) {
int s,t,i;
s=0;
t=0;
for(i=0;i<numsSize;i++)
if(i%2==0)
s=s+nums[i];
else
t=t+nums[i]*-1;
return s+t; 
}