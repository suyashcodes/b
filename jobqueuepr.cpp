#include<iostream>
using namespace std;
const int size = 100;
class jobqueue{
    private:
    int front,rear;
    string arr[size];
    public:
    jobqueue(){
        front = -1;
        rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear==size-1;
    }
    void addJob(string str){
        if(isFull()){
            cout<<"Queue is Full\n";
        }
        else{
            if(isEmpty()) front=0;
            arr[++rear]=str;
        }
    }
    void deleteJob(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
        }
        else{
            if(front==rear){
                front=rear=-1;
            }
            front++;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
        if((front+1)>rear){
            cout<<"Queue is Empty.\n";break;
        }
            cout<<"\nJobs : \n";
            cout<<"Job : "<<arr[i]<<endl;
        }
    }
    
};

int main() {
    jobqueue jobQueue;

    jobQueue.addJob("Job1");
    jobQueue.addJob("Job2");
    jobQueue.addJob("Job3");

    jobQueue.display();

    jobQueue.deleteJob();
    jobQueue.display();

    jobQueue.deleteJob();
    jobQueue.display();

    jobQueue.deleteJob();
    jobQueue.display();


    return 0;
}