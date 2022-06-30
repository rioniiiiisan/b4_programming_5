#include <math.h>
#include "../include/header.h"

double func1(int n){
	double sum = 0;
	for(int m = 1; m <= n; m++){
		sum += pow(-1,m-1) / m;
	}
	return sum;
}

double func2(int n){
	double sum = 0;
	for(int m = 0; m <= n; m++){
		sum += pow(-1, m) / (2 * m + 1); 
	}
	return sum;
}