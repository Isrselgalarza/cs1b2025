#include<iostream>
#include <fstream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

void addToTheEnd(Node*& p, int val){
    Node* newNode = new Node{val, nullptr};
    if(p == nullptr){
        p = newNode;
        return;
    }
    Node* temp = p;
    while(*temp->next != nullptr){
        temp = temp->next; //temp = (*temp).next;
    }
    temp->next = newNode;

}

Node* readListtFromFile(string fn = "p0.txt"){
    ifstream f(fn);
    Node* h = nullptr;
    while(!f.eof()){
        int x;
        f >> x;
        addToTheEnd(h, x);
    }
    return h;
}

int main(){
    Node* head = nullptr;
    head = readListFromFile();
}