#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> dictionary;

    // 키-값 쌍 추가
    dictionary["Alice"] = 25;
    dictionary["Bob"] = 30;
    dictionary["Charlie"] = 35;

    // 값 출력
    std::cout << "Alice의 나이: " << dictionary["Alice"] << std::endl;
    std::cout << "Bob의 나이: " << dictionary["Bob"] << std::endl;

    // 값 수정
    dictionary["Alice"] = 26;
    std::cout << "Alice의 수정된 나이: " << dictionary["Alice"] << std::endl;

    return 0;
}
