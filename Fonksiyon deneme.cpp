#include<stdio.h>
int fonk(int a)
{
	a=6;
	return a;
}
int main()
{
	int a=5;
	printf("a sayisi=%d ve foksiyonu=%d",a,fonk);
}
