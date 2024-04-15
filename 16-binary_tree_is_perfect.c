#include "binary_trees.h"
/**
* is_perfect_check - Checks if func is perfect
* @tree: Tree to check
* Return: 0
*/
int is_perfect_checker(const binary_tree_t *tree, size_t leaf_depth, size_t level)
{
if (tree_leaf(tree))
return (level == leaf_depth ? 1 : 0);
if (tree->left == NULL || tree->right == NULL)
return (0);
return (is_perfect_checker(tree->left, leaf_depth, level + 1) &&
is_perfect_checker(tree->right, leaf_depth, level + 1));
}
/**
* tree_leaf - checks for leaves
* @tree: Tree checked
* Return: 0
*/
size_t tree_leaf(const binary_tree_t *tree)
{
return ((tree->left == NULL && tree->right == NULL) ? 1 : 0);
}
/**
* leaf - For returning the leaf
* @tree: The tree checked
* Return: 0
*/
const binary_tree_t *leaf(const binary_tree_t *tree)
{
if (tree_leaf(tree) == 1)
return (tree);
return (tree->left ? leaf(tree->left) : leaf(tree->right));
}
/**
* tree_depth - Checks for depth
* @tree: Tree checked
* Return: 0
*/
size_t tree_depth(const binary_tree_t *tree)
{
return (tree->parent != NULL ? 1 + tree_depth(tree->parent) : 0);
}
/**
* binary_tree_is_perfect - Returns if tree is perfect
* @tree: The tree checked
* Return: 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (is_perfect_checker(tree, tree_depth(leaf(tree)), 0));
}
