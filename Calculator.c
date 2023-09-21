#include <stdio.h>
int main(){
	int num1, num2;
	float sum;
	char oper;

	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter operation: ");
	scanf(" %c", &oper);
	printf("Enter the second number: ");
	scanf("%i", &num2);

	if (oper == '*'){
		sum = num1 * num2;
		printf("Output is: %.0f \n", sum);
	}
	else if (oper == '+'){
		sum = num1 + num2;
		printf("Output is: %.0f \n", sum);
	}
	else if (oper == '-'){
		sum = num1 - num2;
		printf("Output is: %.0f \n", sum);
	}
	else if (oper == '/'){
		sum = num1 / num2;
		printf("Output is: %.0f \n", sum);
	}
	else if (oper == '%'){
		sum = num1 % num2;
		printf("Output is: %.0f \n", sum);
	}
	else printf("error\n");


return 0;
}

