#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int greatest(struct Node *p){
  int max =-65535;
   while(p){
    if(p-> data > max)
      max = p-> data;
      p = p -> next;
    }

  cout<<"Max element is: "<<max;
  return max;

}

int main() {
   insert(300);
   insert(1);
   insert(7);
   insert(12);
   insert(2);
   insert(50);
   insert(9);
   cout<<"The linked list is: ";
   display();
  //  count();
   greatest(head);
   return 0;
}
