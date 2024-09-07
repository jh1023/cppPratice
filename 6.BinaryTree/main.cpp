#include <iostream>

// 트리 노드 구조체 정의
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// 중위 순회 함수
void inorderTraversal(TreeNode* node) {
    if (node) {
        inorderTraversal(node->left);
        std::cout << node->value << " ";
        inorderTraversal(node->right);
    }
}

int main() {
    // 노드 생성
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // 트리 중위 순회
    std::cout << "중위 순회: ";
    inorderTraversal(root);
    std::cout << std::endl;

    // 메모리 해제
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
