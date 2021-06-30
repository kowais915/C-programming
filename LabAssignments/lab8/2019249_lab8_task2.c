#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//defining a structures
typedef struct node
{
    int keyData;
    struct node *leftChild, *rightChild;
} treeNode; //creating an alias



//==================prototyping========================
treeNode *nodeCreater(int keyVal);
void inorderTraversal(treeNode *root);
void largestValueFinder(treeNode *root);
//====================================================


int main()
{
    //===========================the first tree========================
    treeNode *node2 = nodeCreater(25);
    node2->leftChild = nodeCreater(17);
    node2->rightChild = nodeCreater(35);
    node2->leftChild->leftChild = nodeCreater(13);
    node2->leftChild->rightChild = nodeCreater(19);
    node2->rightChild->leftChild = nodeCreater(27);
    node2->rightChild->rightChild = nodeCreater(55);
   
    printf("Inorder traversal of tree 1 :");
    inorderTraversal(node2);
    largestValueFinder(node2);

 //============================the second tree=======================
    treeNode *node = nodeCreater(1);
    node->rightChild = nodeCreater(2);
    node->rightChild->rightChild = nodeCreater(3);
    node->rightChild->rightChild->rightChild = nodeCreater(4);
    node->rightChild->rightChild->rightChild->rightChild = nodeCreater(5);
    node->rightChild->rightChild->rightChild->rightChild->rightChild = nodeCreater(6);
    
    printf("\nInorder traversal of tree 2 :");
    inorderTraversal(node);
    largestValueFinder(node);
 
//=========================the third tree=====================
treeNode *root = nodeCreater(25);
    printf("\nInorder traversal of tree 3 :");
    inorderTraversal(root);
    largestValueFinder(root);
 

//============the 4th tree================================
treeNode *rootX = nodeCreater(25);
rootX->rightChild = nodeCreater(78);
rootX->rightChild->rightChild = nodeCreater(100);
rootX->rightChild->rightChild->rightChild = nodeCreater(112);
    
    printf("\nInorder traversal of tree 4 :");
    inorderTraversal(rootX);
    largestValueFinder(rootX);
    return 0;
}
 //=====================function bodies======================

 //=======================nodeCreater========================
 treeNode *nodeCreater(int keyVal)
{
    treeNode *node2 = (treeNode*)malloc(sizeof(treeNode));
    node2->keyData = keyVal;
    node2->leftChild = NULL;
    node2->rightChild = NULL;
    return(node2);
}
//============================================================

//=======================ordering=============================
void inorderTraversal(treeNode *root)
{
    if(root != NULL)
    {
        inorderTraversal(root->leftChild);
        printf(" %d ",root->keyData);
        inorderTraversal(root->rightChild);
    }
}
//===========================================================

//==================theLargest===============================
void largestValueFinder(treeNode *root)
{
    while (root != NULL && root->rightChild != NULL)
    {
        root = root->rightChild;
    }
    printf("\nLargest value is %d\n", root->keyData);
}
//============================================================