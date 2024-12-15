#include <stdio.h>

int main(){
	int arr[] = {11, 2, 1, 14, 55, 60};
	int *p = arr; //gan p thanh phan tuu dau tien trong mang
	
	//truy cap phan tu dau tien trong mang bang chi so
	int n = arr[3];
	printf("n = %d.\n", n);
	int m = *(p + 3);
	printf("m = %d.\n", m);
	
	return 0;
}
