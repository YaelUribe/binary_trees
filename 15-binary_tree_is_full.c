#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree:  pointer to the root node of the tree
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int child_l = 0;
	int child_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		child_l = binary_tree_is_full(tree->left);
		child_r = binary_tree_is_full(tree->right);
		if (child_l == 1 && child_r == 1)
			return (1);
	}
	return (0);
}
