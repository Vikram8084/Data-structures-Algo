#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }


};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}

void deleteNode(Node* &head, Node* &tail, int position){
    //empty ll
    if(head ==NULL){
        cout<<"can not delete, coz LL is empty"<<endl;
        return;
    }
    if(head == tail){
        //single element
        Node* temp =head;
        delete temp;
        head = NULL;
        tail =NULL;
        return;
    }
    //delete from head
    int len =findLength(head);
    if(position == 1){
        //first node ko delete karo
        Node* temp =head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }
    else if(position == len){
    //last node ko delete karna hai

    //find prev
    Node* prev =head;
    while(prev -> next != tail){
        prev =prev -> next;
    }

    //prev node ka link null karo
    prev ->next =NULL;

    // node delete karo
    delete tail;

    //update tail
    tail =prev;
    }

    else{
        //middle me koi node ko delete karna hai

        //step1: set prev/curr pointers
        Node* prev =NULL;
        Node* curr =head;
        while(position != 1){
            position--;
            prev =curr;
            curr =curr->next;
        }
        //step2: prev->next me curr ka next node add karo
        prev->next =curr->next;

        //step3: node isolate kardo
        curr->next =NULL;
        //step4:delete node
        delete curr;
    }


}

int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail,20);
        insertAtHead(head, tail,50);
        insertAtHead(head, tail,60);
        insertAtHead(head,tail, 90);
        insertAtTail(head, tail, 77);

        print(head);
        cout << endl;
        deleteNode(head, tail, 1);

        print(head);


        return 0;
}