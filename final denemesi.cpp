#include<stdio.h>
main()
{
	int v,f,c,a,b;
    printf("gecme notu hesaplama uygulamasi\n");
	printf("vize notunuzu giriniz\n");
	scanf("%d",&a);
	printf("final notunuz giriniz\n");
	scanf("%d",&b);
	v=a*(4.0/10);
	f=b*(6.0/10);
	c=f+v;
	printf("donem sonu notunuz=%d\n",c);
	if(c>60)
	printf("gectiniz tebrikler");
	else if(c==60)
	printf("uff son anda kurtardin");
	else
	printf("gecemediniz lutfen daha iyi hazirlanin bi daha ki sefere");
}
