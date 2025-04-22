#include<stdio.h>
int main()
{
	
	int gm,gmy,bm,em,om,mm,dm,tp,bp,i,nge,ngi,k,ig,a;
	gm=80000;
	gmy=50000;
	bm=35000;
	em=30000;
	om=25000;
	mm=25000;
	dm=20000;
	tp=10000;
	bp=12000;
	i=8000;
	nge=8000000;
	ngi=3500000;
    a=1;
	k;
	ig=gm+(gmy*2)+(bm*5)+(em*3)+(om*8)+(mm*5)+(dm*5)+(tp*50)+(bp*20)+(i*100);
	while (k<=50000000)
	{   
	    a=a+1;
		k=k+(nge-(ngi+ig));
	}
	printf("%d. ayda kara gecer",a);
}
