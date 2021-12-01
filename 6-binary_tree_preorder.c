#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node:  is a pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
