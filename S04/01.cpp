#include<iostream>
#include<fstream>
using namespace std;

struct address {
    string city;
    string state;
}

struct Employee {
    int id;
    string name;
    float salary;
    address addr
}

void showMenu (){

}


void printEmp(Emplyee e){
    cout << e.id << ", " << e.name << " ," <<  e.salary << ", " << e.addr.city << ", " << e.addr.state << endl;
}

void printAllEmployee ()


void readFile(Emplyee emplyee[100]; string fn = "employees.txt"){
    ifstream f(fn);
    int i = 0;
    while(!f.eof){
        f >> e[i].id;
        getline(f.e[i].name);
        f >> e[i].salary;
        getline(f.e[i].addr.city)
        f >> e[i].addr.state;
        i++
    }
    f.close;
    return i;
}


int main (){
    Employee emplyees[100];
    int empcout = 0;

    while(true){
        int choice = showMenu();
        switch(choice){
            case 1: printAllEmployees(employee, empcount);
                break;
            case 2: 
                break;
            case 3: 
                break;
            case 4:
                break;
            case 5:
                break;
            case 6: readFromFile(employee);
                break;
        }
    }
    readFile(Emplyee employee[100])
} 