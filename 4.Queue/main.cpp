#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue_example;

    // 큐에 데이터 인큐
    queue_example.push(1);
    queue_example.push(2);
    queue_example.push(3);

    std::cout << "큐 요소들: ";
    while (!queue_example.empty()) {
        std::cout << queue_example.front() << " ";  // 큐의 맨 앞 요소 출력
        queue_example.pop();  // 큐에서 데이터 디큐
    }
    std::cout << std::endl;
    //큐 요소들: 1 2 3 
    
    //size = 0
    std::cout << "queue size: " << queue_example.size() << std::endl;
    return 0;
}
