#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* link;
};

Node* push(Node* head, int ele){
    Node* temp = head;
    Node* newNode= new Node;
    newNode->data=ele;
    if(temp== nullptr){
        cout<<"inserting first node"<<endl;
        newNode->link=NULL;
        head=newNode;
    }else{
        newNode->link=temp;
        head=newNode;
    }
    return head;
}

void display(Node* head){
    Node* temp= head;
    if(head== nullptr){
        cout<<"no node present"<<endl;
    }else{
        cout<<"elements are:"<<endl;
        while(temp!= nullptr){
            cout<<temp->data<<endl;
            temp=temp->link;
        }
    }
}

Node* reverseLinkedList(Node* head){
    Node* current=head;
    Node* prev=nullptr;
    Node* next= nullptr;
    if(current== nullptr){
        cout<<"no node to reverse:single node";
    }else if(current->link == nullptr){
        cout<<"no node present"<<endl;
    }else{
        while(current!= nullptr){
            next=current->link;
            current->link=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
    return head;
}

Node* addLoop(Node* head){
    Node* first=head;
    Node* prev=nullptr;
    if(first== nullptr){
        cout<<"no node present"<<endl;
    }else if(first->link== nullptr){
        cout<<"single node present"<<endl;
    }else {
        while (first->link != NULL) {
            prev = first;
            first = first->link;
        }
        first->link = prev;
    }
    return head;
}

bool findTheLoopInLinkList(Node *head){
    Node* slowptr=head;
    Node* fastptr= slowptr;
    if(slowptr== nullptr){
        cout<<"no node present"<<endl;
    }else if(slowptr->link== nullptr){
        cout<<"single node present"<<endl;
    }else{
        while(slowptr!= nullptr&& fastptr!= nullptr){
            if((slowptr->link && slowptr->link->link)==NULL){
                return 0;
            }
            fastptr=slowptr->link->link;
            if(slowptr==fastptr){
                cout<<"loop is detected;"<<endl;
                return 1;
            }
            slowptr=slowptr->link;
        }
    }
    return 0;
}

bool removeTheLoop(Node *head){
    Node* slowptr=head;
    Node* fastptr= slowptr;
    Node* prev=fastptr;
    if(slowptr== nullptr){
        cout<<"no node present"<<endl;
    }else if(slowptr->link== nullptr){
        cout<<"single node present"<<endl;
    }else{
        while(slowptr!= nullptr&& fastptr!= nullptr){
            if((slowptr->link && slowptr->link->link)==NULL){
                return 0;
            }
            prev=fastptr;
            fastptr=slowptr->link->link;
            if(slowptr==fastptr){
                prev->link= nullptr;
                fastptr=prev;
                cout<<"loop is removed"<<endl;
                return 1;
            }
            slowptr=slowptr->link;
        }
    }
    return 0;
}

int main(){
    Node *head=nullptr;
    int option;
    int number;
    while(1) {
        cout<<"enter the option"<<endl;
        cin>>option;
        switch (option) {
            case 1:
                cout << "enter the ele to insert";
                cin >> number;
                head=push(head, number);
                break;
            case 2:
                 cout<<"reverse a linked list"<<endl;
                 head=reverseLinkedList(head);
                 break;
            case 3:
                cout<<"add a loop"<<endl;
                head= addLoop(head);
                break;
            case 4:
                cout<<"find the loop in linked list:"<<endl;
                cout<<findTheLoopInLinkList(head)<<endl;
                break;
            case 5:
                cout<<"remove the loop"<<endl;
                cout<<"loop is remove:"<<removeTheLoop(head)<<endl;
                break;
            case 6:
                display(head);
                break;
            case 7:
                exit(0);
        }
    }
    return 0;
}
