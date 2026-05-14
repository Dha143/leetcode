int passThePillow(int n, int time) {
int i,j,k;
j=1;
k=1;
for(i=1;i<=time;i++)
{
j=j+k;
if(j==n)
k=-1;
if(j==1)
k=1;
}
return j;
}