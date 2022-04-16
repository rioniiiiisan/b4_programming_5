#include <stdio.h>
#include <math.h>
#include "../include/header.h"

int main(){
	int n;
	while(1){
		printf("Input integer of n (>0) (To exit, enter 0 or less.): ");
		scanf("%d",&n);
		if(n <= 0)break;
		printf("\nn = %d\n",n);
		printf("(1) sum = %lf  log 2 = %lf\n", func1(n), log(2.0));
		printf("(2) sum = %lf  pi/4 = %lf\n\n", func2(n), M_PI / 4.0);
	}
	return 0;
}
