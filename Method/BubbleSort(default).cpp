#include <iostream>
void bubbleSort(int *arr);
int getLen(int *arr);

int main(){
    //Bubble Sort for integer
    int arr[9] = {5,8,3,2,1,7,6,4};
    bubbleSort(arr);
    for(int i=0; i<8; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

void bubbleSort(int *arr){
    int len;
    len = getLen(arr);
    for(int i=0; i<len; i++){
        for(int j=0; j<len-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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