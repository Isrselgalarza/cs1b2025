#include<iostream> 
#include<fstream> 
using namespace std; 

struct Node { 
    int val; 
    Node* next; 
};

void addToTheEnd(Node*& p, int val) {
    Node* newNode = new Node {val, nullptr}; 
    if (p == nullptr) { 
        p = newNode; 
        return; 
    }
    Node* temp = p; 
    while(temp->next != nullptr) { 
        temp = temp->next;   // temp = (*temp).next; 
    }
    temp->next = newNode; 
}

Node* readListFromFile(string fn = "p0.txt") { 
    ifstream f(fn); 
    Node* h = nullptr; 
    while(!f.eof()) { 
        int x; 
        f >> x; 
        addToTheEnd(h, x); 
    }
    f.close();
    return h; 
}

void printList(Node* head) { 
    while(head != nullptr) { 
        cout << head->val << " "; 
        head = head->next;  // head = (*head).next
    }
    cout << endl; 
}

void deleteByValue(Node*& h, int val) { 
    if (h == nullptr) { return; }

    if (h->val == val) {
        Node* t = h; 
        h = h->next; 
        delete t; 
        return; 
    }

    Node* t = h; 
    while(t->next != nullptr && t->next->val != val) { 
        t = t->next;
    }

    if (t->next == nullptr) { return; }
    Node *toDelete = t->next; 
    (*t).next = t->next->next; 
    delete toDelete; 
}

void printMiddleNode (Node* h){
    Node* p = h;
    int count = 0;
    while(p != nullptr){
        p=p->next;
        count++
    }

    count /= 2;
    while(count > 0){
        h = h->next;
        count--;
    }
    cout << "The middle number is: " << h->val << endl;;
}



int main() { 
    Node* head = nullptr; 
    head = readListFromFile();
    printList(head);
    while(true) {
        int x; 
        cout << "Enter a value to delete from the list: ";
        cin >> x; 
        if (x == -1) { 
            break; 
        }
        deleteByValue(head, x); 
        printList(head);
        printMiddleNode(head)
    }
}
    