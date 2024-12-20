#include<iostream>
#include<vector>

using namespace std;

struct Node {
    int value;
    Node *left, *right;
    Node() {
        left = NULL;
        right = NULL;
    }
    Node(int _value) {
        value = _value;
        left = NULL;
        right = NULL;
    }
};

struct Tree {
    Node *root;
    Tree() {
        root = NULL;
    }
    bool empty() {
        return root == NULL;
    }


    void insert(int value) {
        if (empty()) {
            root = new Node(value);
            return;
        }
        insert(root, value);
    }

    void insert(Node *aux, int value) {
        if (value < aux->value) {
            if (aux->left == NULL) {
                aux->left = new Node(value);
                return;
            }
            insert(aux->left, value);
        } else if (value > aux->value) {
            if (aux->right == NULL) {
                aux->right = new Node(value);
                return;
            }
            insert(aux->right, value);
        }
    }

    bool search(int value) {
        Node *aux = root;
        while (aux != NULL) {
            if (value == aux->value) {
                return true;
            } else if (value < aux->value) {
                aux = aux->left;
            } else if (value > aux->value) {
                aux = aux->right;
            }
        }
        return false;
    }

    void preOrder(Node *aux, vector<int> &result) {
        if (aux == NULL) return;
        result.push_back(aux->value); // Adiciona o valor atual
        preOrder(aux->left, result);  // Percorre o lado esquerdo
        preOrder(aux->right, result); // Percorre o lado direito
    }


    void inOrder(Node *aux, vector<int> &result) {
        if (aux == NULL) return;
        inOrder(aux->left, result);   // Percorre o lado esquerdo
        result.push_back(aux->value); // Adiciona o valor atual
        inOrder(aux->right, result);  // Percorre o lado direito
    }


    void postOrder(Node *aux, vector<int> &result) {
        if (aux == NULL) return;
        postOrder(aux->left, result);  // Percorre o lado esquerdo
        postOrder(aux->right, result); // Percorre o lado direito
        result.push_back(aux->value);  // Adiciona o valor atual
    }

    vector<int> getPreOrder() {
        vector<int> result;
        preOrder(root, result);
        return result;
    }

    vector<int> getInOrder() {
        vector<int> result;
        inOrder(root, result);
        return result;
    }

    vector<int> getPostOrder() {
        vector<int> result;
        postOrder(root, result);
        return result;
    }
};

void printVector(const vector<int> &v, const string &label) {
    cout << label;
    for (size_t i = 0; i < v.size(); ++i) {
        if (i > 0) cout << " ";
        cout << v[i];
    }
    cout << endl;
}


int main() {
    int C;
    cin >> C;

    for (int i = 1; i <= C; ++i) {
        int N;
        cin >> N;

        Tree t;
        for (int j = 0; j < N; ++j) {
            int value;
            cin >> value;
            t.insert(value);
        }

        cout << "Case " << i << ":" << endl;

        printVector(t.getPreOrder(), "Pre.: ");
        printVector(t.getInOrder(), "In..: ");
        printVector(t.getPostOrder(), "Post: ");
        cout << endl;
    }

    return 0;
}
