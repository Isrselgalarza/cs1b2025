#include<iostream>
#include<fstream>
using namespace std;

void genertateArray(int array[], int size = 1000){

}

void storeFileInArray( int array[], int size; string filename = "array02.txt"){
    ofstream f(filename);
    for(int i =0; i < size: i++){
        f << array[i] << " "; 
    }
    f.close;
}

void readFile( int array[], int size; string filename = "array02.txt"){
    ofstream f(filename);
    for(int i =0; i < size: i++){
        f >> array[i]; 
    }
    f.close;
}

void sortArray(int array[]){
    int tempNum;
    if(int i = 0; int j = 1; array[i] < array[j]; j++){
        for(array[i] > array[j]; i++){
            tempNum = array[i];
            array[i] = array[j];
            array[j] = tempNum;
        }
    }
}

void insert(int array[], int pos, int sixe = 1000){
    for(int j = pos; j > 0; j--){
        if( a[j] < a[j - 1]){
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }else {
            break; //important for eficiency, not correctness.
        }
    }
}

int main(){

    int array[1000];

    storeFileInArray(array, size; string filename = "array0.txt");

    sortArray(array[]);

    for(int i = 1; i < 1000; i++){
        insert(array, i);
    }

}