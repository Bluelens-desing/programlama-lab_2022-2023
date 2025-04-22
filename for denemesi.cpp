#include<stdio.h>
main()
{
	int i,n,b,a=1,d;
	printf("for dongusu denemesi\n");
	printf("hesaplamasi icin deger atayiniz\n"); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	b=b*a;
	a=a+1;
	d=n;
	printf("gibtuBMG\n");
    }
    printf("deger=%d\n",b);
    while(n>=5)
    {
    	printf("MNGkargo%d\n",n-5);
    	n=n-1;
    	
	}
	if(d==5)
	printf("demek bu meshur sayiya bastin");
	else
	printf("ugurlu sayiyi kullanmani tercih ederim\n");
	do{
		printf("ee ne oldu simdi=%d",n);
		n=n-1;
	}while(n==1);
	return 0;
}
