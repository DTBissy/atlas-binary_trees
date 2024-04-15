#include "binary_trees.h"
/**
* binary_tree_leaves - Returns the count of leaves in a tree
* @tree: The tree counted
* Return: 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree)
{
	if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}
	else
  {
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
return (0);
}
