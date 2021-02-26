#include <iostream>
void mergeSort(int data[], int p, int r, int len, int* tmp){
    int q;
    if(p<r){
        q = (p+r)/2;
        mergeSort(data,p,q,len,tmp);
        mergeSort(data,q+1,r,len,tmp);
        merge(data,p,q,r,len,tmp);
    }

}
void merge(int data[], int p, int q, int r, int len, int* tmp){
    int i = p, j = q+1, k = p;
    while(i<=q && j <= r){
        if(data[i] <= data[j])
            tmp[k++] = data[i++];
        else
            tmp[k++] = data[j++];
    }
    while(i<=q){tmp[k++] = data[i++];}
    while(j<=r){tmp[k++] = data[j++];}
    for(int a=i; a<=r; a++){ data[a] = tmp[a];}

}
int getLen(int *arr){
    int num = 0, i = 0;
    while(arr[i] != '\0'){
        num++;
        i++;
    }
    return num;
}

int main(){
    //MergeSort
    int arr[9] = {5,8,3,2,1,7,6,4}, tmp[9];
    int len = getLen(arr);
    mergeSort(arr,0,len-1,len,tmp);
    for(int i=0; i<8; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}