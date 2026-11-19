class MyCircularQueue {
vector<int> data;
int head = 0, count = 0, capacity;
public:
MyCircularQueue(int k) : data(k), capacity(k) {}
bool enQueue(int value) {
if (isFull()) return false;
data[(head + count) % capacity] = value;
count++;
return true;
}
bool deQueue() {
if (isEmpty()) return false;
head = (head + 1) % capacity;
count--;
return true;
}
int Front() { return isEmpty() ? -1 : data[head]; }
int Rear() { return isEmpty() ? -1 : data[(head + count - 1) % capacity]; }
bool isEmpty() { return count == 0; }
bool isFull() { return count == capacity; }
};
