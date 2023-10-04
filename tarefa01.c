#include<stdlib.h>
#include<stdio.h>

int main(){
	int v[10]={-1,2,-3,4,-5,6,-7,8,-9,10}, i;
	
	for(i=0; i<10; i++){
		if(v[i] > 0){
		  printf(" %d\n", v[i]);
		}
		else{
			printf("%d\n", v[i]);
		}
	
	}
	system("pause");
	return 0;
}
