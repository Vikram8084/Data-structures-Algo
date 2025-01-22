#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(){
           // cout <<"I am inside the default constructor"<<endl;

            this->next =NULL;
        }

        Node(int data){
            //cout<<"I am inside parametrized constructor"<<endl;
            this->data = data;
            this->next =NULL;
        }

};

void printLL(Node*head){
    Node* temp = head;//imp

    while(temp != NULL){
        cout <<temp->data <<"-> " ;
        temp = temp ->next;
    }
    cout<<endl;

}

int getLength(Node*head){
    Node* temp =head;
    int count =0;
    while(temp !=NULL){
        count++;
        temp=temp->next;

    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail,int data){//pass by reference yaad rakhna 
    if(head == NULL){
        //empty LL

        //step1 : create new node
        Node* newNode =new Node(data);
        //step: 2 update head
        head = newNode;
        tail = newNode;
    }
    else{
    //create a new node
    Node* newNode =new Node(data);
    //attach a new node to a head node
    newNode ->next = head;
    //update head
    head = newNode;
    //tail = newNode;
    }
}


//Insertion at Tail
void insertAtTail(Node* &head,Node* &tail, int data){
    if(head == NULL){
        //empty LL
        //step1: create toh karo node
        Node* newNode =new Node(data);
        //step2: single node hai entire list me to
        //that's why head and tail ko ispar point karwado
        head = newNode;
        tail =newNode;
    }
    else{
        //non-empty LL
        //step1: create a new node
        Node* newNode =new Node(data);
        //step2: tail node ko attach karo newNode se
        tail->next =newNode;
        //step3:update
        tail = newNode;


    }
}

void createTail(Node* &head, Node* &tail){
    Node* temp =head;
    while(temp -> next != NULL){
        tail = temp;
        temp =temp->next;
    }
    //jab ye loop khatam ho gay hoga then 
    //aapka temp wala pointer 
    //khad hoga last node par
    //tab temp = temp krke , tail ko last node par le aao
    tail =temp;

}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(position < 1){
        cout<<"Cannot insert, lease enter a valid position"<<endl;
        return;
    }
    int length = getLength(head);


   if(position == 1){
    insertAtHead(head, tail, data);
   } 

    else if(position > length){
        //cout<<"Cannot insert ,please enter a valid position"<<endl;
        //return;
        insertAtTail(head, tail, data);
    }

//     if(position == length +1){
//     insertAtTail(head, tail, data);
//    }

   else{
    // insert at the moiddle of the linked list


    //step1: create a new node
    Node* newNode =new Node(data);
    //step2: traverse the prev // curr to the position 
    Node* prev =NULL;
    Node* curr = head;
    while(position != 1){
        prev =curr;
        curr =curr->next;
        position--;
    }
    //step3: attach prev to new node
    prev -> next =newNode;
    //step4: attach NewNode to currr
    newNode ->next = curr;



   }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail,30);
    insertAtTail(head, tail, 50);

    // printLL(head);
    // cout << "Linked List after inserting at head:" << endl;
    // printLL(head);

    // insertAtTail(head, tail, 40);
    // insertAtTail(head, tail, 50);

    // cout << "Linked List after inserting at tail:" << endl;
    printLL(head);
    //insertAtPosition(head, tail,5,1);
    insertAtPosition(head, tail,1000,51);
    printLL(head);


 
    return 0;
}