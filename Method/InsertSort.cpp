#include <iostream>

void insertSort(int *arr);
int getLen(int *arr);

int main(){
    int arr[9] = {5,8,3,2,1,7,6,4};
    insertSort(arr);
    for(int i=0; i<8; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

void insertSort(int *arr){
    int len;
    len = getLen(arr);
    for(int i=1; i<len; i++){
        for(int j=i; j>0;){
            if(arr[j-1] >= arr[j]){
                int temp;
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
            }
            else
                break;
        }
    }
}

int getLen(int *arr){
    int num = 0, i = 0;
    while(arr[i] != '\0'){
        num++;
        i++;
    }
    
    return num;
}