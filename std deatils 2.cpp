#include <string>
#include <iostream>
class Queue{
private: int front = -1; int rear = -1; std::string arr[5];
public:
    Queue(){
        front = -1;
        rear = -1;
        for (int i = 0; i<5; i++) {
            arr[i] = "-";
        }
    }
    bool isEmpty(){
        
        if (front == -1 && rear == -1) {
            return  true;
        }
        else{
            return  false;
        }
    }
    bool isFull(){   
        if (rear == 4) {
            return  true;
        }
        else{
            return  false;
        }
    }
    void enqueue(std::string name, std::string regno, int age ){
        if(isFull()){
            std::cout<<"Queue is full"<<std::endl;
            return;
        }
        else if(isEmpty()){
            rear = 0;
            front = 0;
            arr[rear] = name + ", " + regno + ", " + std::to_string(age);
        }
        else{
            rear++;
            arr[rear] = name + ", " + regno + ", " + std::to_string(age);
        }}   
    std::string dequeue(){
        std::string x;
        if (isEmpty()){
            std::cout<<"queue underflow"<<std::endl;
            return 0;
        }
        else if(front==rear){
            x = arr[front];
            arr[front] = "-";
            rear = -1;
            front = -1;
            return x;
        }
        else{
            x = arr[front];
            arr[front] = "-";
            front++;
            return  x;
        }
    }
    void display(){
        std::cout << std::endl;
        std::cout<<"values in the queue are: "<<std::endl;
        for (int i = 0; i<5; i++) {
            std::cout<<"Name, regno, age in order: "<<arr[i]<<" "<<std::endl;
        }
    }
};
int main() {
    Queue q1;
    q1.enqueue("priyansh", "20BCE2292", 18);
    //q1.enqueue("");
    q1.display();
    q1.dequeue();
    q1.display();
    return 0;
}
