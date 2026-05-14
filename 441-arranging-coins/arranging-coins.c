int arrangeCoins(int n) {
int i;
long j,k,m=0;
j=0;
k=1;
for(i=0;i<=n;i++)
{
j=j+k;
if(j<=n)
m++;
else
{
return i;
break;
}
k++;  
}
return 0;
}