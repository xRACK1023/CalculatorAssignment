#include <stdio.h>
int main(){
	int num1, num2, sum;
	char oper;

	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter operation: ");
	scanf(" %c", &oper);
	printf("Enter the second number: ");
	scanf("%i", &num2);

	if (oper == '*'){
		sum = num1 * num2;
		printf("The final out put is: .\n");
	}
	else if(oper == '+'){

		printf("this is addition.\n");
	}
	else if(oper == '-'){
		printf("this is subtraction.\n");
	}
	else if(oper == '/'){
		printf("this is divison.\n");
	}
	else(oper == '%'){
		printf("this is mod.\n");
	}

return 0;
}

