#include <iostream>
#include <string>

using namespace std;

// доделать top empty size

//template<typename T>
//class Stack
//{
//    T* stack = nullptr;
//    int count = 0;
//    int capacity;
//public:
//    Stack(int capacity) 
//    {
//        stack = new T[capacity];
//        this->capacity = capacity; 
//    }
//
//    Stack(Stack& st)
//    {
//        this->count = st.count;
//        this->capacity = st.capacity;
//        if (stack != nullptr)delete[]stack;
//        stack = new T[capacity];
//        for (int i = 0; i < count; i++)
//        {
//            stack[i] = st.stack[i];
//        }
//    }
//
//    void operator = (Stack& st)
//    {
//        this->count = st.count;
//        this->capacity = st.capacity;
//        if (stack != nullptr)delete[]stack;
//        stack = new T[capacity];
//        for(int i = 0; i < count; i++)
//        {
//            stack[i] = st.stack[i];
//        }
//    }
//
//    ~Stack()
//    {
//        if (stack!=nullptr)
//            delete[]stack;
//    }
//    
//    void push(T el)
//    {
//        if (count >= capacity) return;
//        stack[count++] = el;
//    }
//    T pop()
//    {
//        if (count == 0) return NULL;
//        count--;
//        return stack[size];
//    }
//    T top()
//    {
//        return stack[count - 1];
//    }
//
//    bool empty()
//    {
//        return !count;
//    }
//
//    int size()
//    {
//        return this->count;
//    }
//    
//
//
//
//};



template <typename T>
class Queue
{
    T* queue = nullptr;
    int count = 0;
    int capacity;
public:
    Queue(int capacity)
    {
        queue = new T[capacity];
        this->capacity = capacity;
    }
    ~Queue()
    {
        if (queue != nullptr) delete[]queue;
    }

    void push_range(Queue q)
    {
        if (count+q.count > capacity) return;
        for(int i = 0; i < q.count; i++)
        {
            queue[count] = q.queue[i];
            count++;
        }
    }

    Queue(Queue& q)
    {
        this->count = q.count;
        this->capacity = q.capacity;
        if (queue != nullptr)delete[]queue;
        queue = new T[capacity];
        for (int i = 0; i < count; i++)
        {
            queue[i] = q.queue[i];
        }
    }

    void operator = (Queue& q)
    {
        this->count = st.count;
        this->capacity = st.capacity;
        if (queue != nullptr)delete[]queue;
        queue = new T[capacity];
        for (int i = 0; i < count; i++)
        {
            queue[i] = q.queue[i];
        }
    }

    bool empty()
    {
        return !count;
    }

    T front()
    {
        return queue[0];
    }

    T back()
    {
        return queue[count - 1];
    }

    int size()
    {
        return count;
    }

    void push(T el)
    {
        if (count >= capacity) return;
        queue[count++] = el;
    }

    T pop()
    {
        if (count <= 0)return NULL;
        T buf = queue[0];
        for(int i = 0; i < count; i++)
        {
            queue[i] = queue[i + 1];
        }
    
    }

};

template <typename T>
void showStack(Stack<T> stack)
{
    while (!stack.empty())
    {
        cout << stack.pop();
    }
}





int main()
{
    /*Stack<int>stack(3);
    cout << "---push 3 4 6 9 ---" << endl;
    stack.push(3);
    stack.push(4);
    stack.push(6);
    stack.push(9);
    cout << "____ pop" << endl;
    cout << stack.pop();
    cout << "____ top" << endl;
    cout << stack.top() << endl;
    showStack(stack);
    cout << stack.top();*/
}


