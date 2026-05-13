int missingMultiple(int* nums, int numsSize, int k) {
int a,m,i,j,f;
a=1;
m=k;
for(i=0;i>=0;i++)
{
f=0;
k=a*m;
for(j=0;j<numsSize;j++)
if(k==nums[j])
{
f=1;
break;
}
if(f==0)
{
return k;
break;
}
a++;
}
return 0;
}