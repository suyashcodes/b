#include<iostream>
#include<vector>
using namespace std;

class CircularQueue{
    private:
    vector <int> arr; 
    int front,rear,max;
    public:
    CircularQueue(int size){
        front=-1;
        rear=-1;
        max=size;
        arr.resize(size);
    }
    bool isEmpty(){ return front==-1;}
    bool isFull(){ return (front==0&&rear==max-1)||front==rear+1;
    }

    void enqueue(int order){
        if(isFull()) {cout<<"Overflow\n";return ;}
        if(isEmpty()){front=0;rear=0;}
        else{
            rear=(rear+1)%max;
        }
        arr[rear]=order;
        cout<<"\nOrder "<<order<<" placed successfully\n";
    }

    void dequeue(){
        if(isEmpty()){ cout << "Underflow \n"; return ;}
        int no = arr[front];
        if(front==0 && rear==0){
            front=rear=-1;
        }
        else{
            front=(front+1)%max;
        }
        cout<<"\nOrder no "<<no<<" served successfully\n";
    }
    void display(){
        if(isEmpty()){
            cout<<"No orders in queue\n";
            return ;
        }
        int i=front;
        do{
            cout<<"\nOrder no : "<<arr[i]<<endl;
            i=(i+1)%max;
        }while(i!=(rear+1)%max);
    }
};

int main() {
    CircularQueue pizzaParlor(3);

    pizzaParlor.enqueue(101);
    pizzaParlor.enqueue(102);
    pizzaParlor.enqueue(103);
    pizzaParlor.display();

    pizzaParlor.dequeue();
    pizzaParlor.display();

    pizzaParlor.enqueue(104);
    pizzaParlor.enqueue(105);
    pizzaParlor.enqueue(106);
    pizzaParlor.display();

    pizzaParlor.enqueue(107);
    pizzaParlor.dequeue();
    pizzaParlor.display();

    return 0;
}