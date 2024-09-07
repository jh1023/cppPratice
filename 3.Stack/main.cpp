#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack_example;

    // 스택에 데이터 푸시
    stack_example.push(1);
    stack_example.push(2);
    stack_example.push(3);

    std::cout << "스택 요소들: ";
    while (!stack_example.empty()) {
        std::cout << stack_example.top() << " ";  // 스택의 맨 위 요소 출력
        stack_example.pop();  // 스택에서 데이터 팝
    }
    std::cout << std::endl;

    return 0;
}
