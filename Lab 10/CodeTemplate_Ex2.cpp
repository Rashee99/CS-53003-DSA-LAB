//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.


#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *left, *right;
};

class BST {
	public :
	Node *root;
    BST() {
        root = NULL;
    }
    Node* insert(Node*, int);
    void preOrder(Node*);
    void inOrder(Node*);
    void postOrder(Node*);
};

Node* BST :: insert(Node* root, int value) {
    if (root == NULL) {
        Node* newNode = new Node();
        newNode-> data = value;
        newNode-> left = newNode -> right = NULL;
        root = newNode;
        return root;
    }
    if (value < root -> data){
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }


    return root;
}

void BST :: preOrder(Node* root){
  if (root == NULL) {
    return;
  }
  cout<< root-> data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void BST :: inOrder(Node* root) {
    if (root == NULL) {
    return;
  }
  inOrder(root->left);
  cout<< root-> data << " ";
  inOrder(root->right);
}


void BST :: postOrder(Node* root) {
  if (root == NULL) {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout<< root-> data << " ";
}

int main() {
	BST tree;
	string ch="yes";
	int num;
	do  {
		cout<<"Enter the element to be inserted in the tree\n";
		cin>>num;
		tree.root=tree.insert(tree.root, num);
		cout<<"Do you want to insert another element?\n";
		cin>>ch;
	}while(ch.compare("yes")==0);

	cout<<"Preorder Traversal : The elements in the tree are:\n";
	tree.preOrder(tree.root);
	cout<<"\n";
	cout<<"Inorder Traversal : The elements in the tree are:\n";
	tree.inOrder(tree.root);
	cout<<"\n";
    cout<<"Postorder Traversal : The elements in the tree are:\n";
	tree.postOrder(tree.root);
	cout<<"\n";
	return 0;
}



