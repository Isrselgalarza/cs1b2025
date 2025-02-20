#include<iostream>
using namespace std;

enum class dayOfWeek { Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5 , Saturday = 6, Sunday = 7};

dayOfWeek getNextDay(dayOfWeek today) {
    int todayInt = int(today);
    if (todayInt == 7){
        return dayOfWeek::Monday; 
    }
    return dayOfWeek(todayInt + 1); 
}

void printDay(dayOfWeek day) {
    switch (day) {
        case dayOfWeek::Monday: 
        cout << "Monday"; 
        break;
        case dayOfWeek::Tuesday: 
        cout << "Tuesday"; 
        break;
        case dayOfWeek::Wednesday: 
        cout << "Wednesday"; 
        break;
        case dayOfWeek::Thursday: 
        cout << "Thursday"; 
        break;
        case dayOfWeek::Friday: 
        cout << "Friday"; 
        break;
        case dayOfWeek::Saturday: 
        cout << "Saturday"; 
        break;
        case dayOfWeek::Sunday:
        cout << "Sunday"; 
        break;
    }
}

int main() {
    int todayNum;
    cout << "Enter a number for a day ";
    cin >> todayNum;

    if (todayNum < 1 || todayNum > 7) {
        cout << "enter a number between 1-7." << endl;
        return 1;
    }

    dayOfWeek today = dayOfWeek(today);
    dayOfWeek nextDay = getNextDay(nextDay);

    cout << "The next day is: " << printDay(day) << endl;
return 0;
}