#include <stack>

class Queue
{
public:
    stack<int> st1, st2;

    Queue() {}

    void enQueue(int val)
    {
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        // If empty Just Push into stack
        st1.push(val);
        // Transfer back elements to Stack1
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int deQueue()
    {
        if (st1.empty())
        {
            return -1;
        }
        int popedEle = st1.top();
        st1.pop();
        return popedEle;
    }

    int peek()
    {
        if (st1.empty())
        {
            return -1;
        }
        return st1.top();
    }

    bool isEmpty()
    {
        return st1.empty();
    }
};