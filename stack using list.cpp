#include <iostream>
#include <string.h>
struct Node
{	std::string name;
    std::string regno;
    int age;
    Node *next;   
}*top = NULL; 
void push(Node n){
    Node* newNode;
    newNode = new Node;
    newNode->name = n.name;
    newNode->regno = n.regno;
    newNode->age = n.age;
    if(top == NULL)
        newNode->next = NULL;
    else
        newNode->next = top;
    top = newNode;}
void pop(){
    if(top == NULL)
        std::cout << "Stack underflow" << std::endl;
    else{    Node* temp = top;
        	top = temp->next;
        	free(temp); }}
void display()
{	if(top == NULL)
        std::cout << "Stack underflow" << std::endl;
    else{    int count = 0;
        	Node *temp = top;
        	while(temp->next != NULL){
            count++;
            std::cout << count << ") " << temp->name << ", " << temp->regno << ", " << temp->age <<std::endl;
            temp = temp -> next; }
        count++;
        std::cout << count << ") " << temp->name << ", " << temp->regno << ", " << temp->age <<std::endl;}}
int main(){
    Node n1;
    Node n2;
    n1.name = "priyansh";
    n1.regno = "20BCE2292";
    n1.age = 18;
    push(n1);
    display();
    return 0;}
