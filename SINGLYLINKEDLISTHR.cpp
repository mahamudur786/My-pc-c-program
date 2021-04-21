#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int node_data) {
            this->data = node_data;
            this->next = NULL;
        }
};

class SinglyLinkedList {
    public:
        Node *head;
        Node *tail;

        SinglyLinkedList() {
            this->head = NULL;
            this->tail = NULL;
        }

        void insert_node(int node_data) {
            Node* node = new Node(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void free_singly_linked_list(Node* node) {
    while (node) {
        Node* temp = node;
        node = node->next;

        free(temp);
    }
}

void printLinkedList(Node* head) {
 if (head == NULL) {
      cout << "No Nodes in Singly Linked List";
    } else {
     Node * temc = head;
 
      while (temc != NULL) {
          cout << endl << "Singly Linked List Values : ";
     cout << temc->data<<" ";
        temc = temc-> next;
      }
    }
}

int main()
{
    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        llist->insert_node(llist_item);
    }

    printLinkedList(llist->head);

    return 0;
}

