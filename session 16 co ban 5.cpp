#include <stdio.h>
// khai bao ham 
void string(int *arr, int somoi, int vitri); 
//ham main
int main(){
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
	printf("Mang truoc khi cap nhap : ");
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		printf("%d\t", arr[i]);
	}
	string(arr, 45, 2); // ki tu muon sua tai vi tri ban nhap vao 
	printf("\nMang sau khi sua la : ");
	for(int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
//logic ham
void string(int *arr, int somoi, int vitri){
	arr[vitri] = somoi; 
}
