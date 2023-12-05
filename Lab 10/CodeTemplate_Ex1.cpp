//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;

class Node
{
    public:
      int data;
      Node *left, *right;
};

class BST
{
	public :
	Node *root;
    BST() {
        root = NULL;
    }
    Node* insert(Node*, int);
    int search(int);
};

Node* BST :: insert(Node* root, int value){
    if (root == NULL) {
        Node* newNode = new Node();
        newNode-> data = value;
        newNode-> left = NULL;
        newNode-> right = NULL;
        return newNode;
    }
    if (value < root -> data){
        root->left = insert(root->left, value);
    }
    else if (value > root -> data) {
        root->right = insert(root->right, value);
    }
    return root;
}

int BST :: search(int searchKey) {
    Node* curr = root;
    while (curr !=NULL){
        if (searchKey == curr->data){
            return 1;
        }
            else if (searchKey < curr-> data){
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }

    }

    return 0; //Change the return value as per the problem statement
}

int main()
{
	BST tree;
	string ch="yes";
	int num,searchKey;
	cout<<"Enter the key number:\n";
	cin>>num;

	tree.root=tree.insert(tree.root, num);
	do  {
	    cout<<"Do you want to create another junction (yes/no)?\n";
		cin>>ch;
		if (ch.compare("yes")==0){
		    cout<<"Enter the key number:\n";
		    cin>>num;
	    	tree.root=tree.insert(tree.root, num);

	    }
		else{
		    break;
		}
	}while(true);

	cout<<"\nEnter the key to be search: \n";
	cin>>searchKey;
	if (tree.search(searchKey)){
        cout<<endl<<searchKey<<" fount\n";
	}
	else{
        cout<<endl<<searchKey<<" not fount\n";
	}
    return 0;
}
