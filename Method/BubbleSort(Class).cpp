#include <iostream>
#include <string.h>

class bubbleSort{

    char* content;
    int len;

    public:
    bubbleSort();
    bubbleSort(int *arr);
    bubbleSort(float *arr);
    explicit bubbleSort(const std::string str);


    int getlen() const;
    void print() const;
};

bubbleSort::bubbleSort(int *arr){

}

int bubbleSort::getlen() const{ return len;}
void bubbleSort::print() const{
    for(int i=0; i != len; i++)
        std::cout << content[i] << std::endl;
}

int main(){
    //Bubble Sort for class
    int arr1[9] = {5,8,3,2,1,7,6,4};
    float arr2[9] = {1.4,5.2,5.5,9.7,2.7,3.4,6.6,8.1};
    std::string string = "SortThisInBubbleSort";
    
    bubbleSort array1(arr1);
    bubbleSort array2(arr2);
    bubbleSort str(string);

    array1.print();
    array2.print();
    str.print();
    return 0;
}