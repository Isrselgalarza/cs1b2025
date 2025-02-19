#include<iostream>
using namespace std;

int numSum (int array[], int total) {
    int sum;
    bool found = false;
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4; j++){
            sum = array[i] + array[j];
            if(sum == total){
                cout << "{" << array[i] <<", " << array[j] << "}  , " <<  sum << endl;
                return 0;
            }
        }
    }
}

int main(){

    int array[] = {2, 7, 11, 15};
    int total = 9;

    numSum(array[], total);

}