#include<stdio.h>
#include<stdlib.h>

int main()
{
	int u,price;
	printf("enter ur consumed units \n");
	scanf("%d",&u);
	if(u<=100&&u>0){
		price=50*u;
		printf("%d frs \n",price);
	}
	else if(u>100&&u<=200){
		price=75*u;
		printf("%d frs \n",price);
	}
	else if(u>=200){
		price=100*u;
		printf("%d frs \n",price);
	}
	else if(u<=0){
		printf("error \n");
	}
}
