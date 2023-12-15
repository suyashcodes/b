#include <iostream>
#include <vector>
using namespace std;
class CircularQueue
{
private:
    int front, rear, max;
    vector<int> arr;

public:
    CircularQueue(int s)
    {
        front = -1;
        rear = -1;
        max = s;
        arr.resize(max);
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (front == 0 && rear == max - 1) || front == rear + 1;
    }
    void enqueue(int order)
    {
        if (isFull())
        {
            cout << "Overflow\n";
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % max;
        }

        arr[rear] = order;
        cout << "\nOrder no " << order << " is placed successfully\n";
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Empty queue\n";
            return;
        }
        int order;

        order = arr[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % max;
        }
        cout << "\nOrder no " << order << " is deleted successfully\n";
    }
    void display()
    {
        int i = front;
        do
        {
            cout << "\nOrder : " << arr[i] << "\n";
            i = (i + 1) % max;
        } while (i != (rear + 1) % max);
    }
};

int main()
{
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