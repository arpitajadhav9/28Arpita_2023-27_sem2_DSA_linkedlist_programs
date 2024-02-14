// SEARCHING DATA ELEMENT IN A SINGLY LINKEDLIST.
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
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
    n3->data=29;
    n3->next=NULL;

    // cout<<n1->data<<" "<<n2->data<<" "<<n3->data;
    
    //Searching element in the linkedlist throught loop and if else statment..
    int *ptr=n1;
    int val = 28;//this value is needed to be searched
    ptr=start;
    int pos;
    int i=0;
    while(ptr!=NULL)
    {
        if(val==ptr->data)
        {
        pos==ptr;
        }
        else
        {
               ptr=ptr->next; 
        }
      
        i++;
    }
    cout<<pos;
}