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

void updateEmployee (Employee e[100]){


}



void printEmp(Emplyee e){
    cout << e.id << ", " << e.name << " ," <<  e.salary << ", " << e.addr.city << ", " << e.addr.state << endl;
}

void printAllEmployee (Employee e[100] ){
    for(int i = 0; i > 100; i++){
        cout << e[i].id << ",";
        cout << e[i].name << ",";
        cout << e[i].salary << ", ";
        cout << e[i].addr.city << ", ";
        cout << e[i].addr.state << ", ";
    }
}


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

    cout << "Employee Management Menu: " << endl;
    cout << "1. Print all employees information. " << endl;
    cout << "2. Update an employees information (by getting their id). << endl;
    cout << "3. Remove an employee. " << endl;
    cout << "4. Add a new employee. " << endl;
    cout << "5. Upload employee to file. << endl;
    cout << "6. Search employee by name. << endl;
    cout << "7. Load employee from a file. " << endl;
    cout << "8. Print employee with highest salary. " << endl;

    while(true){
        int choice = showMenu();
        switch(choice){
            case 1: printAllEmployees(employee, empcount);
                break;
            case 2: updateEmployee(employee);
                break;
            case 3: removeEmployee(employee)
                break;
            case 4:addNewEmployee(employee)
                break;
            case 5:uploadEmptoFile(employee);
                break;
            case 6: readFromFile(employee);
                break;
             case 7: findEmpbyName(employee);
                 break;
             case 8: findHighestSalary(employee);
                 break;
        }
    }
    readFile(Emplyee employee[100])
} 