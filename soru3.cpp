#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,sayi;
	scanf("%d",&sayi);
	while(sayi!=-99)
	{
	if(sayi>0)
	a=a+1;
	else if(sayi<0)
	b=b+1;
	scanf("%d",&sayi);
	c=c+1;
    }
    printf("girilen %d sayi pozitif deger sayisi:%d\n",c,a);
    printf("girilen %d sayi negatif deger sayisi:%d",c,b);
}
