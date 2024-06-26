#include "binary_trees.h"
/**
 * binary_tree_node - Adds a new node to the tree
 * @parent: The parent node
 * @value: The data
 * Return: 0
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *node;

  node = malloc(sizeof(binary_tree_t));
  if (node == NULL)
  {
    return (NULL);
  }
  node->n = value;
  node->parent = parent;
  node->left = NULL;
  node->right = NULL;

  return (node);
}