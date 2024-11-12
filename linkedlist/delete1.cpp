//delete the first node of a linkedlist

#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    node *next;

    //constructor
    node(int value){
        data = value;
        next = NULL;

    }
};

node* create(int arr[],int index,int size)
{
        if(index==size)
        return NULL;

        node *temp;
        temp = new node(arr[index]);
        temp->next = create(arr,index+1,size);
        return temp;

    }


int main(){
    node *head ;
    head  = NULL;

    int arr[] = {10,20,30,40,50};

    head = create(arr,0,5);
    if(head!=NULL){
        node* temp = head;
        head = head->next;
        delete temp;
        
    }

    

    while(head){
        cout<<head->data<<" ";
        head = head->next;

    }
}
