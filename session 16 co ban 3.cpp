#include <stdio.h>

int main(){
	int string();
	int arr[3]={1,2};
	int *p = arr;
	int x = *p;
	printf("%d\n", x);
	int y = *(p +1);
	printf("%d\n", y);

	printf("Ket qua : %d.", string(&x, &y));
	return 0;
}

int string(int *a, int *b){
	int sum;
	sum = *a + *b;
	return sum;
}
