#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap

    /*
        This is a min-heap
        The smallest element has the highest priority.
        The syntax for declaring a min-heap is as follows:
        priority_queue<int, vector<int>, greater<int>> pq;
        where, greater<int> is a comparator that ensures the smallest element has the highest priority.
        vector<int> is the underlying container that stores the elements.
    */

    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << "Min element: " << pq.top() << endl; // 5

    pq.pop();
    cout << "Min element after pop: " << pq.top() << endl; // 10

    return 0;
}
