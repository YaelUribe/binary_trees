#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree:  pointer to the root node
 * Return: Depth value
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t t_depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	t_depth = binary_tree_depth(tree->parent) + 1;
	return (t_depth);
}
