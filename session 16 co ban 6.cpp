#include <stdio.h>
#include<string.h>
//khai bao ham
int string(int *arr, int size, int num); 
//ham main
int main(){
    int arr[] = {1, 2, 4, 5, 6, 7}; 
    int num = 7; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int check = string(arr, size, num);
    if( check != -1){
       printf("Gia tri %d ban dang tim o vi tri %d.", num, check);
    }else{
       printf("Gia tri %d khong ton tai trong mang.");
    }

    return 0;
}
//logic ham
int string(int *arr, int size, int num){
    for (int i = 0; i < size; i++){
        if (arr[i] == num){
            return i; 
        }
    }
    return -1; 
}
