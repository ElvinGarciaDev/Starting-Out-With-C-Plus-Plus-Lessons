// Specification file for the IntBinaryTree class
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

class IntBinaryTree
{
    private:
        struct TreeNode
        {
            int value;      //the value in the node
            TreeNode *left  //Pointer to left child
            TreeNode *right // pointer to right child  node
        };

        TreeNode *root;     //Pointer to the root node

        //Private member functions
        void insert(TreeNode *&, TreeNode *&);
        void destroySubTree(TreeNode *);
         void deleteNode(int, TreeNode *&);
        void makeDeletion(TreeNode *&);
        void displayInOrder(TreeNode *) const;
        void displayPreOrder(TreeNode *) const;
        void displayPostOrder(TreeNode *) const;

    public:
        //constructor
        IntBinaryTree()
        { Root = nullptr; }

        // Destructor
        ~IntBinaryTree()
        { destroySubTree(root); }

        // Binary tree operations
        void insertNode(int);
        bool searchNode(int);
        void remove(int);

        void displayInOrder() const
        { displayInOrder(root); }
        void displayPreOrder() const
        { displayPreOrder(root); }
        void displayPostOrder() const
        { displayPostOrder(root); }

};

#endif INTBINARYTREE_H