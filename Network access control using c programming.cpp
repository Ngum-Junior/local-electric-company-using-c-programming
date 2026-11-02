#include<stdio.h>
#include<stdlib.h>

int main()
{
	int id,s,a;
	printf("enter your employee id \n");
	scanf("%d",&id);
	if(id==1){
		printf("valid \n");
	}
		else
		printf("access denied:invalid employee id \n");
	printf("have you completed your security training \n");
	scanf("%d",&s);
	if(s==1){
		printf("completed \n");
	}
		else 
		printf("access rejected:training required \n");
	printf("is your account currently active \n");
	scanf("%d",&a);
	if(a==1){
		printf("active \n");
	}
		else 
		printf("access rejected:account inactive \n");
		if((id),(a),(s)==1){
			printf("access granted");
		}
}
