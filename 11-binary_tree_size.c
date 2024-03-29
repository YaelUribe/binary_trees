#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size = 0;

	if (tree == NULL)
	return (0);
	if (tree->left)
		t_size += binary_tree_size(tree->left);
	if (tree->right)
		t_size += binary_tree_size(tree->right);
	return (t_size + 1);
}
