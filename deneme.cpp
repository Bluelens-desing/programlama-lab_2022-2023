#include<stdio.h> #include<math.h> 
#define pi 3.14159 
int main(){ 
int n,i,C; 
float A,B,D,E,F,top=0,radyan; 
printf("n:"); 
scanf("%d",&n); 
for(i=1; i<=n; i++) 
{  
	C=log(i*10); 
    D=pow((i+C),(n-1)); 
    radyan=(pi*i)/180; 
    E=10-sin(radyan); 
    F=exp(E); 
    B=D*F; 
    A=sqrt(B); 
    top=top+A; 
} 
printf("Ýþlemin sonucu = %f\n",top); 
return 0;}
