#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left > height_right)
		counter = height_left;
	else
		counter = height_right;
	return (counter + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree:  pointer to the root node of the tree
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;
	int balance_fact = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		height_l = -1;
	else
		height_l = binary_tree_height(tree->left);
	if (tree->right == NULL)
		height_r = -1;
	else
		height_r = binary_tree_height(tree->right);
	balance_fact = height_l - height_r;
	return (balance_fact);
}
