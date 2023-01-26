#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head;
Node* tail;

void buatList() {
    head = NULL;
    tail = NULL;
}

void tambahBelakang(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = tail;
    newNode->next = NULL;

    if(tail != NULL) {
        tail->next = newNode;
    }

    tail = newNode;

    if(head == NULL) {
        head = newNode;
    }
}

void hapusDepan() {
    if(head != NULL) {
        head = head->next;
        head->prev = NULL;
    }
}


void cetakList() {
    Node* current = head;
    while(current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    buatList();
    tambahBelakang(2);
    tambahBelakang(10);
    tambahBelakang(7);
    tambahBelakang(4);
    cout << "List sebelum ditambahkan: ";
    cetakList();

    tambahBelakang(3);
    tambahBelakang(6);
    tambahBelakang(1);
    cout << "List setelah ditambahkan: ";
    cetakList();

    hapusDepan();
    hapusDepan();
    cout << "List setelah dua elemen awal dihapus: ";
    cetakList();

    return 0;
}
