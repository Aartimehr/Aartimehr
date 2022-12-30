#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};
int main()
{
    //initialize nodes
   struct node *head;
   struct node *one = NULL;
   struct node *two = NULL;
   struct node *three = NULL;
   struct node *four = NULL;
   struct node *five = NULL;
 
  //allocate memory
   one = new node();
   two = new node();
   three = new node();
   four = new node();
   five = new node();
    
    // assigning values
    
    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;
    
    //connecting the nodes
    
    one->next = two;
    two->next = three;
    three->next = four;
    five->next = NULL;
     
    //save address of first node in head
    
    head = one;
     
    //print the linked list 
    
    head = one;
    while(head!= NULL)
    {
        cout<<head->data;
        head = head->next;
    }
}
