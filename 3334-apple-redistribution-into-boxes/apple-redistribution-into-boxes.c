int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
int i,j,c,s=0,d=0;
for(i=0;i<appleSize;i++)
s=s+apple[i];
for(i=0;i<capacitySize-1;i++)
for(j=i+1;j<capacitySize;j++)
if(capacity[i]>capacity[j])
{
c=capacity[i];
capacity[i]=capacity[j];
capacity[j]=c;
}
for(i=capacitySize-1;i>=0;i--)
{
s=s-capacity[i];
d++;
if(s<=0)
break;
}
return d;
}