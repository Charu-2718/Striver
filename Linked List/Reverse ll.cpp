#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseL(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }

    Node* last = reverseL(head->next);

    head->next->next=head;

    head->next  = NULL;

    return last;

}

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    
    // List: 1 -> 2 -> 3 -> 4
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Print the list
    printList(node1);

    node1  = reverseL(node1);

    printList(node1);
    
}