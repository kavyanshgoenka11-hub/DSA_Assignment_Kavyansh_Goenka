//Problem Link :
//https://leetcode.com/problems/design-circular-queue/description/

class MyCircularQueue {
private:
    int size;
    int front, rear;
    vector<int> queue;

public:
    MyCircularQueue(int k) {
        size = k;
        front = -1;
        rear = -1;
        queue.resize(k);
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) front = rear = 0;
        else rear = (rear + 1) % size;
        queue[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % size;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return queue[front];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return queue[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }
};

