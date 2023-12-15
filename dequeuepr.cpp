#include<iostream>
#include<vector>
using namespace std;
class Queue{
    private:
    vector<int> vect;
    int front,rear,max;
    public:
    Queue(int s){
        front=-1;
        rear=-1;
        max = s;
        vect.resize(s);
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return (front==0&&rear==max-1)||front==rear+1;
    }
    void insertFront(int n){
        if(isFull()) cout<<"Queue is Full\n";
        if(isEmpty()){
            front=rear=0;
        }
        else if(front==0){
            front=max-1;
        }
        else{
            front--;
        }
        vect[front]=n;
    }
    void insertRear(int n){
        if(isFull()) cout<<"Queue is Full\n";
        if(isEmpty()){
            front=rear=0;
        }
        else if(rear==max-1){
            rear=0;
        }
        else{
            rear++;
        }
        vect[rear]=n;
    }
    void deleteFront(){
        if(isEmpty()) cout<<"Queue is Empty\n";
        if(front==rear){
            front=rear=-1;
        }
        else if(front==max-1){
            front=0;
        }
        else{
            front++;
        }
    }
    void deleteRear(){
        if(isFull()) cout<<"Queue is Full\n";
        if(isEmpty()){
            front=rear=0;
        }
        else if(rear==0){
            rear=max-1;
        }
        else{
            rear--;
        }
    }
    void display(){
        int i=front;
        do{
            cout<<vect[i]<<" ";
            i=(i+1)%max;
        }while(i!=(rear+1)%max);
    cout<<endl;
    }
};

int main() {
    Queue myDeque(5);

    myDeque.insertFront(10);
    myDeque.insertFront(20);
    myDeque.display();

    myDeque.insertRear(30);
    myDeque.display();

    myDeque.deleteFront();
    myDeque.display();

    myDeque.deleteRear();
    myDeque.display();

    myDeque.insertFront(40);
    myDeque.insertRear(50);
    myDeque.insertFront(60);
    myDeque.display();

    return 0;
}
