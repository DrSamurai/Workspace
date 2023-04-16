#include <cassert>
#include "PriorityQ.h"

void testQueue() {
    PriorityQ q(5);

    assert(q.isEmpty() == true);
    assert(q.isFull() == false);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    assert(q.isEmpty() == false);
    assert(q.isFull() == false);
    assert(q.peek() == 1);
    assert(q.getFront() == 0);
    assert(q.getRear() == 3);
    assert(q.size() == 4);

    q.enqueue(5);
    assert(q.isFull() == true);
    assert(q.getRear() == 4);
    assert(q.isFull() == true);

    q.dequeue();
    assert(q.getFront() == 1);
    assert(q.isFull() == false);
    assert(q.size() == 4);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    assert(q.isEmpty() == true);
    assert(q.getFront() == -1);
    assert(q.getRear() == -1);
    assert(q.size() == 0);

    q.deleteArray();
}

int main() {
    testQueue();
    return 0;
}