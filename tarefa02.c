#include<stdio.h>
int num1, num2; //vari�veis globais

void produto(){
	scanf("%d%d", &num1, &num2);
	int pro = num1 * num2;
	printf("%d\n", pro);	
}
int main(){
	produto();	
	return 0;
}
