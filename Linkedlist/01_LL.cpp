#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(){
        cout<<"I am inside default costructor"<<endl;  
        this->next =NULL;
    }

    Node(int data){
        cout<<"I am inside parameterised costructor"<<endl;
        this->data = data;
        this->next =NULL;
    }
};

void printLL(Node* head){
    Node* temp =head;

    while(temp !=NULL){
        cout<<temp->data <<" -> ";
        temp = temp -> next; 
    }

    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int length=0;

    while(temp != NULL){
        length++;
        temp =temp->next;
    }
    return length;

}


//insertion in linked list
//insert at head
//pass by value nhi pass by refernce hoga  
void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //empty LL
        //step1: create new node
        Node* newNode = new Node(data);
        //step2: update head
        head =newNode;
        tail =newNode;
        
    }
    else{
     //non empty wala case   
    //create a new node
    Node* newNode =new Node(data);
    //attach new node to head node
    newNode -> next =head;
    //update head
    head =newNode;
    
}
}

void insertAtTail(Node* &head,Node* tail, int data){
    if(head == NULL){
        //empty LL
        //step1: crate to karo new node
        Node* newNode =new Node(data);
        //step2: single node hai entire list me, to
        //that's why head and tail ko ispar point karwado
        head= newNode;
        tail=newNode;
    }
    else{
        // non empty LL
        //step1: create new node

        Node* newNode=new Node(data);
        //step2: tail node ko attach karo new node se

        tail ->next =newNode;
        //step3: update tail
        tail =newNode;
    }
}

void createTail(Node* &head, Node* &tail){
    Node* temp =head;
    while(temp -> next != NULL){
        
        temp =temp->next;
    }
        //jab ye loop khatam hogya hoga 
        //then aapka temp wala pointer
        //khada hoga last node par
        //tab tail = temp krke, tail ko last node par le jao
        tail = temp;
    
}

void insertAtPosition(Node* &head,Node* &tail, int data, int position){
    //assumption: position ki value [1 to length +1 tak]
    // if(position < 1){
    //     cout<<"Can not insert, please enter a valid position"<<endl;
    //     return;
    // }
    int length = getLength(head);

    // if(position > length){
    //     cout<<"Can not insert, please enter a valid position"<<endl;
    //     return;
    // }
    if(position == 1){
        insertAtHead(head, tail, data);
    }
    else if(position == length +1){//yaha galti hua tha length+1 kiya 
        insertAtTail(head, tail, data);
    }
    else{
        //insert at middle of the linked list 

        //step1: create new node
        Node* newNode= new Node(data);
        // step 2: traverse prev // curr to position
        Node* prev =NULL;
        Node* curr =head;
        while(position != 1){
            prev = curr;
            curr =curr->next;
            position--;
        }
        //step3: attach prev to new node
        prev -> next =newNode;
        //step4:attach new node to curr
        newNode ->next =curr;
    }


}

int main(){

//creation of Node

//Node a;

// Node* first = new Node(10);
// Node* second = new Node(20);
// Node* third = new Node(30);
// Node* fourth = new Node(40);
// Node* fifth = new Node(50);
// Node* sixth = new Node(60);

// first ->next =second;
// second ->next =third;
// third ->next =fourth;
// fourth ->next =fifth;
// fifth ->next =sixth;
// sixth ->next =NULL;//linked list complewte ho chuki hai

// Node* head =first;
// Node* tail =sixth;
// cout<<"Printing the limked list"<<endl;
// printLL(head);

// insertAtHead(head,tail, 500);
// insertAtTail(head, tail,400); 
// printLL(head);
// cout<<"The length of linked list is: "<<getLength(head);
Node* head = NULL;
Node* tail = NULL;

insertAtHead(head, tail,10);
insertAtHead(head, tail,20);
insertAtHead(head, tail,30);
insertAtTail(head, tail, 50);
insertAtPosition(head, tail, 300,3 );

printLL(head);


 return 0;
}