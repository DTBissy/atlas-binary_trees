#include "binary_trees.h"
/**
* is_full_check - Is going to check if everything
* @tree: The checked
* Return: 0
*/
int is_full_check(const binary_tree_t *tree)
{
if (tree)
{
	if ((tree->left != NULL && tree->right == NULL) ||
	(tree->left == NULL && tree->right != NULL) ||
	is_full_check(tree->left) == 0 ||
	is_full_check(tree->right) == 0)
	return (0);
}
return (1);
}
/**
* binary_tree_is_full - Returns if tree is full
* @tree: The tree checked
* Return: 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree)
{
	return (is_full_check(tree));
}
return (0);
}
