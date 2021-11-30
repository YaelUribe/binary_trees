#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the node parent
 * @value: is the value to the node
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
	{
		return (NULL);
	}

	root->parent = parent;
	root->n = value;
	return (root);
}
