long long removeZeros(long long n) {
int r,k=0,a[10000],i;
long s=0;
while(n!=0)
{
r=n%10;
if(r!=0)
{
a[k]=r;
k++;
}
n=n/10;
}
for(i=k-1;i>=0;i--)
s=s*10+a[i];
return s;   
}