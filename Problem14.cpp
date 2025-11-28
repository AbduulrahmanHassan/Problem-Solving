//Queue
using namespace std;
#include <iostream>

struct queue
{
    int front =-1 , rear = -1;
    int size = 100;
    int arr[100];
};


void EnQueue(queue &q , int element)
{
    if(q.front == -1)
    {
        q.front = q.rear =  0 ;
    }
    else if (q.rear == q.size -1)
    {
        return;
    }
    else
    {
        q.rear = q.rear +1;
    }

    q.arr[q.rear] = element;

}

void Display(queue &q)
{
    if(q.front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for(int i =q.front ; i <= q.rear ; i++)
    {
        cout<<q.arr[i]<<endl;
    }
}
void Dequeue(queue &q)
{
    if(q.front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Removed: " << q.arr[q.front] << endl;
    q.front++;

    if(q.front > q.rear)
    {
        q.front = q.rear = -1; 
    }
}

int main()
{
    queue q;
    EnQueue(q,10);
    EnQueue(q,500);
    Display(q);
    Dequeue(q);
    EnQueue(q,120);
    Display(q);

}