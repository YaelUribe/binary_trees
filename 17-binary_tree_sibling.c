#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node:  pointer to the root node of the tree
 * Return: pointer to sibling node, or NULL if it fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	sibling = node->parent;
	if (sibling->left == node)
	{
		sibling = sibling->right;
		return (sibling);
	}
	sibling = sibling->left;
	return (sibling);
}
