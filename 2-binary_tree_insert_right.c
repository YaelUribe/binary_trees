#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert new node as right-child
 * @parent: Parent node
 * @value: value for the new node
 * Return: pointer to the new node or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (parent->right != NULL)
	{
		new_node->parent = parent;
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
