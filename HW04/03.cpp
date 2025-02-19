#include<iostream>
using namespace std;

int findMissingNumber(int array[], int n) {
    int sum1 = n * (n + 1) / 2;
    int sum2 = 0;
    int final;
    
    for (int i = 0; i < n; i++) {
        sum2 += array[i];
    }
    final = sum1 - sum2;
    return final;
}

int main() {
    int array[] = {3, 0, 1};  
    int n = 3; 
    cout << findMissingNumber(array, n) << endl; 
    return 0;
}