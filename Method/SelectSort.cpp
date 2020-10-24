#include <iostream>

void selectSort(int *arr);
int getLen(int *arr);

int main(){
    int arr[9] = {5,8,3,2,1,7,6,4};
    selectSort(arr);
    for(int i=0; i<8; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

void selectSort(int *arr){
    int min, len, min_num;
    len = getLen(arr);
    for(int i=0; i<len; i++){
        min = arr[i];
        for(int j=i; j<len; j++){
            if(min >= arr[j])
                min = arr[j], min_num = j;
        }
        int temp;
        temp = arr[min_num];
        arr[min_num] = arr[i];
        arr[i] = temp;
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