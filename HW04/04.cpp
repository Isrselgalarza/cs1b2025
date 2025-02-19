#include<iostream>
using namespace std;

int sortArray(int array[]){
    int tempNum;
    if(int i = 0; int j = 1; array[i] < array[j]; j++){
        for(array[i] > array[j]; i++){
            tempNum = array[i];
            array[i] = array[j];
            array[j] = tempNum;
        }
    }
}

void printArray(int array[]) {
    for(int i = 0; i < 5; i++) { 
        cout << array[i] << ", ";
    }
}

int main (){
    int array[] = {100, 4, 200, 1, 3, 4};
    sortArray(array);
    printArray(array);

return 0;
}