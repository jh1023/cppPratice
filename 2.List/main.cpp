#include <iostream>
#include <vector>

int main() {
    std::vector<int> list_example = {10, 20, 30, 40};

    // 요소 추가
    list_example.push_back(50);
    std::cout << "요소 추가 후: ";
    for(int i : list_example) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // 요소 제거
    list_example.erase(list_example.begin() + 1);  // 두 번째 요소 제거
    std::cout << "요소 제거 후: ";
    for(int i : list_example) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
