#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node:  pointer to node to find the uncle
 * Return: pointer to uncle node, or NULL if it fails
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	uncle = node->parent->parent;
	if (uncle->left == node->parent)
	{
		uncle = uncle->right;
		return (uncle);
	}
	uncle = uncle->left;
	return (uncle);
}
