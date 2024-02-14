//SINGLY LL - INSERTING NEW NODE BEFORE A NODE HAVING GIVEN VALUE NUM


#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int NUM;
    Node *start;
    Node *next;
    Node *ptr;
    Node *preptr;

};
int main()
{

    Node *start;
    Node *n1 =(Node *)malloc(sizeof(Node));
    start = n1;
    n1->data = 21;
    n1->next = NULL;

    Node *n2=new Node();
    n1->next=n2;
    n2->data=28;
    n2->next=NULL;


    Node *n3=new Node();
    n2->next=n3;
    n3->data=61;
    n3->next=NULL;

    Node *n4=new Node();
    n2->next=n3;
    n3->data=78;
    n3->next=NULL;


    
    //Inserting newnode the linkedlist throught loop..
    int NUM;
    new_node->data=val
    Node *ptr=start;
    Node *preptr=ptr;
   
    int i=0;
    while(ptr->data!=NUM)
    {
        preptr=ptr;
        ptr=ptr->next;
        i++;
    }
    preptr->next=new_node
}