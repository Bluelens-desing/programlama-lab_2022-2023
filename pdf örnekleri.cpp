#include<stdio.h>
int fonk1(){
 int a;
 scanf("%d",&a);
 if(a==1)
 return 22;
 else if(a==2)
 return 11;
}

void fonk2(int a,int b){
	int sonuc=a+b;
}



int main()
{ 
    int b=4;
    int c=5;
	int a=fonk1();
	printf("%d",a);
	a=fonk2(b,c);
	printf("%d",a);
}
