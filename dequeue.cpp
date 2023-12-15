#include<iostream>
#include<vector>
using namespace std;

class Queue{
    private:
    int front, rear,max;
    vector<int> arr;
    public:
    Queue(int size):front(-1),rear(-1),max(size){
        arr.resize(max);
    }
    bool isEmpty(){
        return (front==-1);
    }
    bool isFull(){
        return (front==0 && rear==max-1)||(front==rear+1);
    }
    void insertFront(int val){
        if(isFull())
        cout<<"Queue is Full\n";
        if(front==-1 && rear==-1){
            front=rear=0;
        }
        else if(front==0){
            front=max-1;
        }
        else{
            front--;
        }
        arr[front]=val;
    }
    void insertRear(int val){
        if(isFull())
        cout<<"Queue is Full\n";
        if(front==-1 && rear==-1){
            front=rear=0;
        }
        else if(rear==max-1){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear] = val;
    }
    void deleteFront(){
        if(isEmpty())
        cout<<"Queue is Empty\n";
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
        if(isFull())
        cout<<"Queue is Full\n";
        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=max-1;
        }
        else{
            rear--;
        }
    }
    void display(){
        cout<<"\nElements : \n";
        int i=front;
        do{
            cout<<arr[i]<<" ";
            i=(i+1)%max;
        }while(i!=(rear+1)%max);
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
