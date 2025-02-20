#include<iostream>
using namespace std;

void readIntervals(int a[][2], string filenamse = "intervals.txt"){
    ifstream f(filename);
    while(!f.eof){
        f>>a[count][0];
        f>>a[count][0];
        count++
    }
    f.close();
    return count;

}

void printIntervals(int a[][2], b[][2], int count){
    for(int i = 0; i < count; i++){
        
    }
}



bool overlaps(int interval1[2], int interval2[2] ){
    return interval2[0] < interval1[1];

}

void merge(int interval1[2], int interval2[2], int b[0][2], int count){
    b[count][0] + interval1[0];
    b[count][1] + interval2[1];
}


int mergeIntervals(int a[][2], int b[][2], int count){
    int countInb;
    for(int i = 0; i < cout; i++){
        if(i < count - 1 and overlaps(a[i], a[i+1])){
            merge(a[i], a[i + 1], b, countInb);
            i++
        }else {
            
            b[countInb][0] + a[i][0];
            b[countInb][1] + a[i][1];
        }
        counInb++
    }
    
}

int main(){
    int a[100][2];
    int intervalsCount = 0;
    intervalsCount =  readIntervals(a);
    printIntervals(a, intervaslCount);
    int b[100][2];
    int mergeIntervalsCount = mergeIntervals(a, b, intervalCount);
    printIntervals(b, mergeIntervasl)

}