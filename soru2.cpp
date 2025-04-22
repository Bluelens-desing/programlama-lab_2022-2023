#include <stdio.h>
int main()
{
int a=3, b=5 , c=9,k;
k=(a>b) and (--c/2)>b;
printf("%d %d %d\n",++a,b--,++k);
printf("%d %d %d\n",a,b,c);
k=3*(2-7)+((3>2*-1)+'A'>'a');
printf("%8d %12.6f\n",k,123.456789);
k=3*(2-7)+(3>2*-1)+'A'>'a';
printf("%8d %2.4f",k,123.456789);
return 0;
}
