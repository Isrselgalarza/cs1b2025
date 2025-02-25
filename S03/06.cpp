#include<iostream>
using namespace std;

struct Bucket {
    int x;
    int y;
}

getLargestBucket(int a [6], int size = 6){
    Bucket b;
    int maxCapacity = 0;
    for(int i = 0; i < size - 1; i++){
        int capacity = a[i] < a[i + 1] ? a[i] : a[i + 1];
        if(capacity > maxCapacity ){
            maxCapacity = capacity;
            b.x = a[i];
            b.y = a[a + 1];

        }
    }
}

int main(){
    int a = {3,5,2,9,1,3};
    Bucket b = getLargestBucket(a);
    cout <, b.x << ", " << b.y << endl;

}