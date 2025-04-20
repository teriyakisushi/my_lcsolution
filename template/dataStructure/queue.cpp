#include <iostream>
#include <queue>
using namespace std;

/*
Queue is a First In First Out (FIFO) data structure.
We use std::queue in C++ to implement a queue.
It has the following main functions:
    1. push(): Add an element to the back of the queue.
    2. pop(): Remove the front element from the queue.
    3. front(): Get the front element of the queue.
    4. back(): Get the back element of the queue.
    5. empty(): Check if the queue is empty.
    6. size(): Get the number of elements in the queue.

*/

void printQueue(queue<int> q)
{
    cout << "Queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void popHead(queue<int> &q)
{
    if (!q.empty())
    {
        cout << "Popped: " << q.front() << endl;
        q.pop();
    }
    else
    {
        cout << "Queue is empty!" << endl;
    }
}

void pushTail(queue<int> &q)
{
    int val;
    cin >> val;
    q.push(val);
    cout << "Pushed: " << val << endl;
}

signed main()
{
    queue<int> q;
    int q_Len;
    cin >> q_Len;
    while (q_Len--)
    {
        int tmp;
        cin >> tmp;
        q.push(tmp);
    }
    printQueue(q);
    // Pop the head of the queue
    cout << "Now Front: " << q.front() << endl;
    popHead(q);
    printQueue(q);
    // Push a new element to the tail of the queue
    pushTail(q);
    printQueue(q);
    return 0;
}