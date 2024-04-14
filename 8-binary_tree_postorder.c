#include "binary_trees.h"
/**
 * binary_tree_postorder - Prints numbers in post order order
 * @tree: Binary_tree_t
 * @func: Function to print node
 * Return: 0
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
