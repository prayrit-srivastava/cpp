#include <iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertathead(node* &head,int val){
    node* temp =head;
    node* p =new node;
    head =p;
    head->data=val;
    head->next=temp;
    return;
}
int sum(node* p){
    if(p==NULL)
    return 0;
    else
    return sum(p->next)+p->data;
}
void insert(int val,node* &head){
    node* p = new node;
    node* temp=head;
    if(head==NULL){
        head = p;
        head->data =val;
        head->next =NULL;
        return;
    }
    while(temp->next){
        temp =temp->next;
    }
    temp->next=p;
    p->data=val;
    return;
}
int maxele(node* p){
    static int mx=0;
    if(p==NULL){
        return mx;
    }
    else
        mx = max(maxele(p->next),p->data);
    return mx;
}
node* search(int val,node* head){
    while(head){
        if(head->data==val)
            return head;
        head=head->next;
    }
    return NULL;
}
void insertat(node* p,int val,int k){
    static int count = 1;
    while(count!=k&&p){
        p=p->next;
        count++;
    }
    node* t =new node;
    t->data=val;
    t->next=p->next;
    p->next = t;
}
void display(node* head){
     node* temp=head;
     if(head==NULL){
         cout<<"the linked list is empty";
     }
     else{
     while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
     }
}
int main()
{   
    node* head=NULL;
    insert(5,head);
    insert(10,head);
    insert(15,head);
    insert(20,head);
    insertathead(head,1);
    insertat(head,40,5);
    display(head);
    cout<<sum(head);
    cout<<maxele(head);
    cout<<"the element is present at"<<search(70,head);
    return 0;
}
