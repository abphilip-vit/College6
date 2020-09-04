/*
Question 

Develop a pseudo code to traverse a single linked list and search for a negative value node. If found delete its successor node from the linked list.   

 
Algorithm 

    Initialize the node with a value and a pointer “next” 

    main() defined 

    New node P1 created 

    P1 value assigned by the user 

    Do-while loop: // Input 

    Input the control variable ch 

    Ch = ‘Y’, repeat loop 

    New node P2 created 

    P1->next = P2 

    Input the new value to P2 

    P1 = P2 

    Loop till ch = ‘N’ 

    Print all nodes “before operation” 

    While loop: // Traversal 

    If not null 

    If negative number 

    If next node not null 

    P2 - next node, P1 - current node 

    p1->next=p2->next 

    Delete P2 node  

    Print all nodes “after operation” 
*/

// Objective is to delete all 

// elements whose predecessor is a  

// negative number 

 

#include <iostream> 

using namespace std; 

 

struct node{ 

  int value; 

  node *next; 

} *start; 

 

int main(){ 

  cout<<"The First Element: "; 

  node *p1=new node; 

  // creating a new node 

  start=p1; 

  cin>>p1->value; 

  p1->next=NULL; 

  char ch; 

  // For inserting 

  do { 

    cout<<"Add another element ? (Y/N): "; 

    cin>>ch; 

    if(ch=='Y'){ 

      node*p2=new node; 

      // creating another node 

      p1->next=p2; 

      cout<<"\nNext value: "; 

      cin>>p2->value; 

      p2->next=NULL; 

      p1=p2; 

    } 

    else if(ch!='N'){ 

      cout<<"\nTry again...\n"; 

    } 

  } while(ch!='N'); 

  cout<<"\n";  

 

  p1=start; 

  cout<<"\nBefore operation: \n"; 

  while(p1!=NULL){ 

    cout<<p1->value<<", "; 

    p1=p1->next; 

  } 

  cout<<"\n"; 

  // Traversing the array 

  p1=start; 

   

while(p1!=NULL){ 

    if(p1->value<0){ 

      if(p1->next!=NULL){ 

        node*p2=new node; 

        p2=p1->next; 

        p1->next=p2->next; 

        delete p2; 

      } 

    } 

    p1 = p1->next; 

  } 

  p1=start; 

  cout<<"\nAfter operation: \n"; 

  while(p1!=NULL){ 

    cout<<p1->value<<", "; 

    p1=p1->next; 

  } 

} 
