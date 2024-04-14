#include "binary_trees.h"
/**
* binary_tree_delete - Deletes(frees) the binary tree
* @tree: Binary_tree_t
* Return: 0
*/

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

printf("\n Deleting every node: %d", tree->n);
free(tree);
}
