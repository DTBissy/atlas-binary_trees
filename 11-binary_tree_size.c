#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a tree
* @size: Returning size
* Return: 0
*/
size_t binary_tree_size(const binary_tree_t *size)
{
if (size)
{
	size_t l = 0, r = 0;

	l = binary_tree_size(size->left);
	r = binary_tree_size(size->right);
return (l + 1 + r);
}
return (0);
}
