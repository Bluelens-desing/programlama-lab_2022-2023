#include<stdio.h>
int main()
{
	int n,i,b=0;
	int a[10];
	printf("n:");
	scanf("%d",&n);
	printf("ilk durum\n");
	for(i=0;i<n;i++)
	{
		a[i]=i;
		printf("%d. deger :%d\n",i,a[i]);
	}
	printf("degistermek istediginiz degeri giriniz\n");
	scanf("%d",&b);
	if(b<=n)
	{
	printf("%d degerin yeni degerini giriniz\n",b);
	scanf("%d",&a[b]);
	for (i=0;i<n;i++) 
	{
		printf("%d. deger :%d\n",i,a[i]);
	}
    }
    else
    printf("yanlýþ deger girdiniz lutfen tekrar deneyiniz");
    
	
	
}
