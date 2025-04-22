#include<stdio.h>
int kokhesap(int a,int b,int c)
{
	int top;
	top=b*b-4*a*c;
	if(top>0)
	{
		printf("2 farklý kok");
	}
	else if(top==0)
	{
		printf("cift kat kok");
	}
	else
	{
		printf("reel kok yok");
	}
	return top;
}
int main()
{
	int a,b,c,top;
	printf("foksiyondaki kat sayilari giriniz\n");
	printf("a=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	printf("\nc=");
	scanf("%d",&c);
	printf("\nfonksiyonun diskriminanti=%d",kokhesap(a,b,c));
}


