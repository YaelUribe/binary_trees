#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert new node as left-child
 * @parent: Parent node
 * @value: value for the new node
 * Return: pointer to the new node or NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (parent->left != NULL)
	{
		new_node->parent = parent;
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}
