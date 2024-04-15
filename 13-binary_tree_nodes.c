#include "binary_trees.h"
/**
* binary_tree_nodes - Counts the nodes in a node
* @tree: Tree counted
* Return: 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

if (tree)
{
	count += (tree->left == NULL || tree->right == NULL) ? 1 : 0;
	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
return (0);
}
