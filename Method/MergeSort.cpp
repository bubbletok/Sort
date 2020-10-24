#include <iostream>
void mergeSort(int* arr);
void merge(int *arr);
int getLen(int *arr);

int main(){
    //MergeSort
    int arr[9] = {5,8,3,2,1,7,6,4};
    mergeSort(arr);
    for(int i=0; i<8; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

int getLen(int *arr){
    int num = 0, i = 0;
    while(arr[i] != '\0'){
        num++;
        i++;
    }
    
    return num;
}