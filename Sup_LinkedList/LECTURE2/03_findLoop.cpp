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
    // tail = newNode;
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
bool checkLoop(Node* &head){
    Node*slow = head;
    Node*fast =head;

    while(fast != NULL){
        fast =fast->next;
        if(fast !=NULL){
            fast =fast->next;
            slow=slow->next;
        }
        // check for loop

        if(fast == slow){
            return true;
        }
    }
    return false;
}

Node* getStsrtingPointLoop(Node* &head){
    //check for loop
    Node*slow =head;
    Node* fast =head;
    while(fast !=NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast =fast->next;
            slow =slow->next;
        }
        //check for loop

        if(fast == slow){
            break;
        }

    }
    //yah pahuch iska matlab slow and fast ,meet kar chuke hai

    slow =head;

    //slow and fast-> 1 step
    while(fast != slow){
        slow = slow->next;
        fast =fast->next;
    
    }

    //returning starting point
    return slow;
}
void removalLoop(Node* &head){
    Node*slow =head;
    Node* fast =head;
    while(fast !=NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast =fast->next;
            slow =slow->next;
        }
        //check for loop

        if(fast == slow){
            break;
        }

    }
    //yah pahuch iska matlab slow and fast ,meet kar chuke hai

    slow =head;

    //slow and fast-> 1 step
    while(fast != slow){
        slow = slow->next;
        fast =fast->next;
    
    }
    //starting point 
    Node* startPoint= slow;

    Node* temp= fast;//fast startingpoint kuchh v likh sakte ho
    while(temp->next != startPoint){
        temp=temp->next;
    }

    temp->next=NULL;
    

}
Node* reverse(Node* &head){
    Node* prev =NULL;
    Node* curr =head;

    while(curr !=NULL){
        Node*nextNode=curr->next;
        curr->next =prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

void addOne(Node* &head){
    //reverse 
    head =reverse(head);


    //add 1
    int carry =1;

    Node*temp =head;
while(temp->next != NULL){
    int totalSum =temp->data +carry;
    int digit =totalSum % 10;
    carry =totalSum /10;

    temp->data =digit;
    temp=temp->next;
    if(carry ==0){
        break;

    }
}
//process last node

if(carry !=0){
    int totalSum =temp ->data + carry;
    int digit =totalSum %10;
    carry =totalSum /10;
    temp ->data =digit;
    if(carry !=0){
        Node*newNode =new Node(carry);
        temp->next =newNode;
    }
}

//reverse 
head =reverse(head);

    

}
int main(){

    //creation of node
   // Node a;
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third = new Node(30);
   Node* fourth = new Node(40);
   Node* fifth = new Node(50);
   Node* sixth = new Node(60);

   first->next = second;
   second->next =third;
   third->next =fourth;
   fourth->next =fifth;
   fifth->next =sixth;
   //Linked list is created

   Node* head = first;
   Node* tail =sixth;
   cout<<"Printing the linked list"<<endl;
   printLL(head);

   cout<<"Length of the linkedlist:"<<getLength(head)<<endl;
   
//    cout<<"Insertion at head"<<endl;
//    insertAtHead(head,tail,500);
//    printLL(head);

   //cout<<"Insert at tail"<<endl;
   insertAtTail(head,tail,300);
   printLL(head);
    return 0;
}