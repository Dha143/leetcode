int sumBase(int n, int k) {
int m=0;
while(n>0)
{
m=m+n%k;
n=n/k;
}  
return m;
}