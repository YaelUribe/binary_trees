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

/**
 * binary_tree_is_perfect - function that measures the size of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: 1 if tree is perfect, otherwise return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);
	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	if ((size_l == size_r) && (height_r == height_l))
		return (1);
	return (0);
}
