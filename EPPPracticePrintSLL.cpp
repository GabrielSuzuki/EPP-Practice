// EPPPracticePrintSLL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node {
        int data;
        Node* next;  // Pointer to the next node in list.
    };

void printList(Node*& head) {
    Node* current;
    current = head;
    while (current->next != NULL) {
        cout << current->data;
        current = current->next;
    }
    }
void insertFront(Node*& head, int element) {
    Node* newNode = new Node;   // Allocates a new node.
    newNode->data = element;    // Assigns a value for data in newNode.
    newNode->next = head;       // The node head points to is now the node that 
                                // comes after newNode.
    head = newNode;             // NewNode is now the head.
}

int main()
{
    Node* head = NULL;
    int i = 0;
    while(i < 3){
        insertFront(head, i);
        i++;
    }
    printList(head);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
