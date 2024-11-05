#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
} Node;

Node *createNode(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

Node *insert(Node *root, int data)
{
  if (root == NULL)
  {
    return createNode(data);
  }
  if (data < root->data)
  {
    root->left = insert(root->left, data);
  }
  else if (data > root->data)
  {
    root->right = insert(root->right, data);
  }
  return root;
}

Node *inorderPredecessor(Node *root, int key)
{
  Node *predecessor = NULL;
  Node *current = root;

  while (current)
  {
    if (key < current->data)
    {
      current = current->left;
    }
    else if (key > current->data)
    {
      predecessor = current;
      current = current->right;
    }
    else
    {

      if (current->left)
      {
        predecessor = current->left;
        while (predecessor->right)
        {
          predecessor = predecessor->right;
        }
      }
      break;
    }
  }
  return predecessor;
}

Node *inorderSuccessor(Node *root, int key)
{
  Node *successor = NULL;
  Node *current = root;

  while (current)
  {
    if (key < current->data)
    {
      successor = current;
      current = current->left;
    }
    else if (key > current->data)
    {
      current = current->right;
    }
    else
    {

      if (current->right)
      {
        successor = current->right;
        while (successor->left)
        {
          successor = successor->left;
        }
      }
      break;
    }
  }
  return successor;
}

Node *search(Node *root, int data)
{
  if (root == NULL || root->data == data)
  {
    return root;
  }
  if (data < root->data)
  {
    return search(root->left, data);
  }
  else
  {
    return search(root->right, data);
  }
}

void inorder(Node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
  }
}

int main()
{
  Node *root = NULL;
  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 8);
  root = insert(root, 12);
  root = insert(root, 17);
  root = insert(root, 25);

  printf("Inorder Traversal of the BST: ");
  inorder(root);
  printf("\n");

  int key = 10;
  Node *predecessor = inorderPredecessor(root, key);
  Node *successor = inorderSuccessor(root, key);

  if (predecessor)
  {
    printf("Inorder Predecessor of %d: %d\n", key, predecessor->data);
  }
  else
  {
    printf("No Inorder Predecessor for %d\n", key);
  }

  if (successor)
  {
    printf("Inorder Successor of %d: %d\n", key, successor->data);
  }
  else
  {
    printf("No Inorder Successor for %d\n", key);
  }

  return 0;
}