#include<iostream>
using namespace std;

enum class dayOfWeek { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

dayOfWeek getNextDay(dayOfWeek today) {
    int todayInt = int(today);
    if (todayInt == 7){
        return dayOfWeek::Monday; 
    }
    return dayOfWeek(todayInt + 1); 
}

void printDay(dayOfWeek nextday) {
    switch (nextDay) {
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
    cout << "Enter the current day (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    cin >> todayNum;

    if (todayNum < 1 || todayNum > 7) {
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
        return 1;
    }

    dayOfWeek today = dayOfWeek(today);
    dayOfWeek nextDay = getNextDay(nextDay);

    cout << "The next day is: " << printDay(nextDay) << endl;
return 0;
}