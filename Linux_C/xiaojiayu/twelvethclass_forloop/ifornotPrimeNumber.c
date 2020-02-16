#include <stdio.h>

int main(){
	printf("please enter a number:");
	int i, number;
	_Bool flag = 1;
	scanf("%d", &number);
	
	for (i = 2; i < number/2; i++){
		if (number % i == 0){
			flag = 0;
		}
	}	
	if (flag){
		printf("%d is a prime number\n", number);
	}
	else{
		printf("%d is not a prime number\n", number);
	}

	return 0;

}
