#include<iostream>
using namespace std;

class jobqueue{
    private:
    int front,rear;
    string arr[100];
    public :
    jobqueue(){
        front=-1;
        rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear==99;
    }
    void addJob(string str){
        if(isFull()){
            cout<<"Queue is Full\n";return;
        }
        else{
            if(front==-1) front=0;
            arr[++rear]=str;
        }
    }
    void deleteJob(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";return;
        }
        else{
            if(front==0 && rear==0){
                front=rear=-1;
            }
            front++;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main() {
    jobqueue jobQueue;

    jobQueue.addJob("Job1");
    jobQueue.addJob("Job2");
    jobQueue.addJob("Job3");
    cout<<"\nJobs : \n";

    jobQueue.display();

    jobQueue.deleteJob();
    cout<<"\nJobs : \n";
    jobQueue.display();

    jobQueue.deleteJob();
    cout<<"\nJobs : \n";
    jobQueue.display();

    jobQueue.deleteJob();
    cout<<"\nJobs : \n";
    jobQueue.display();

    return 0;
}