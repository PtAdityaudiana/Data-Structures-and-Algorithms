#include <iostream>
using namespace std;

class Queue {
public:
    int size;
    int front = 0;
    int rear = -1;
    char *items;

    Queue(int queueSize) {
        size = queueSize;
        items = new char[size];
    }

    void enqueue(char item) { 
        if (rear == size - 1) {
            cout << "Queue overflow, queue is full" << endl;
        } else {
            rear++;
            items[rear] = item;
        }
    }

    void dequeue() { 
        if (front > rear) { 
            cout << "Queue is empty" << endl;
        } else {
            front++;
        }
    }

    char frontElement() { 
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return '\0';
        }
        return items[front];
    }

    bool isEmpty() {
        return front > rear;
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "No one in the queue." << endl;
        } else {
            cout << "Item in the queue: ";
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(int argc, char **argv) {
    Queue q(10);

    q.enqueue('A');
    q.enqueue('b');
    q.enqueue('c');

    q.dequeue();

    cout << "Front element: " << q.frontElement() << endl;
    if (q.isEmpty()) {
    	cout << "Queue empty ? Yes" << endl;
	}else{
		cout << "Queue empry ? No" << endl;
	}
   		 

    q.displayQueue();
    
    
    return 0;
}
