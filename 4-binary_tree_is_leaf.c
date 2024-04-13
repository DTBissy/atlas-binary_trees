#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: Data to check
 * Return:
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
  return (NULL);
}
  if (node->left == NULL && node->right == NULL)
  {
    return (1);
  }
  return (0);
}
