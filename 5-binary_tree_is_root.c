#include "binary_trees.h"
/**
* binary_tree_is_root -  Returns if a root is there or not
* @node: Binary_tree_t
* Return: 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
	return (0);
}
if ((node)->parent != NULL)
{
	return (0);
}
return (1);
}
