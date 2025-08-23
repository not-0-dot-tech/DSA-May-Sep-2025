#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << "Max element: " << pq.top() << endl; // 20

    pq.pop();
    cout << "Max element after pop: " << pq.top() << endl; // 10

    return 0;
}