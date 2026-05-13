int sumDivisibleByK(int* nums, int numsSize, int k) {
int i,j,f,s=0,c,a;
for(i=0;i<numsSize;i++)
{
f=1;
c=0;
a=nums[i];
for(j=0;j<i;j++)
if(nums[i]==nums[j])
{
f=0;
break;
}
if(f==1)
{
for(j=i;j<numsSize;j++)
if(nums[i]==nums[j])
c++;
if(c%k==0)
s=s+a*c;
}
}
return s; 
}