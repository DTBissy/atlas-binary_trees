#include "binary_trees.h"
/**
* binary_tree_uncle - Checks if a node is an Uncle
* @node: The node to be checked
* Return: 0
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
if (node->parent->parent->left == node)
return (node->parent->parent->right);
return (node->parent->parent->left);
}
