#include<stdio.h>
int main(){
	int age,years;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=18){
		printf("eligible to vote");
	}
	else{
		years=18-age;
		printf("not eligible to vote \n the years left to be eligible is %d",years);
	}
	return 0;
}
