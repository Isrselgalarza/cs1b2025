#include <iostream>
using namespace std;

void sortArray(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int findLongestConsecutive(int array[], int n) {
    sortArray(array, n);

    int longestStreak = 1;
    int currentStreak = 1;

    for (int i = 1; i < n; i++) {
        if (array[i] == array[i - 1]) {
            continue; 
        } else if (array[i] == array[i - 1] + 1) {
            currentStreak++;
        } else {
            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
            currentStreak = 1; 
        }
    }
    if (currentStreak > longestStreak) {
        longestStreak = currentStreak;
    }

return longestStreak;
}

int main() {
    int array[] = {100, 4, 200, 1, 3, 2};
    int n = 6;
    cout << "Longest consecutive sequence length: " << findLongestConsecutive(array, n) << endl;
return 0;
}