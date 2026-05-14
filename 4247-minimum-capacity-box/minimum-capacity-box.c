int minimumIndex(int* capacity, int capacitySize, int itemSize) {
int a[1000],i,j,c,m,f=1;
for(i=0;i<capacitySize;i++)
if(itemSize>capacity[i])
f=1;
else
{
f=0;
break;
}
if(f==1)
return -1;
for(i=0;i<capacitySize;i++)
a[i]=capacity[i];
for(i=0;i<capacitySize-1;i++)
for(j=i+1;j<capacitySize;j++)
if(capacity[i]>capacity[j])
{
c=capacity[i];
capacity[i]=capacity[j];
capacity[j]=c;
} 
for(i=0;i<capacitySize;i++)
if(itemSize<=capacity[i])
{
m=i;
break;
}
for(j=0;j<capacitySize;j++)
if(a[j]==capacity[m])
{
f=0;
break;
}
if(f==0)
return j;
return -1;
}