bool canAliceWin(int* nums, int numsSize) {
int i,t=0,s=0;
for(i=0;i<numsSize;i++)
if(nums[i]<=9)
s=s+nums[i];
else
t=t+nums[i];
if(s==t)
return false;
else if(s>t)
return true;
return true;
}