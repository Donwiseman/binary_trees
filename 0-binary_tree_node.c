#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node attached to a given parent.
 * @parent: parent of new node
 * @value: value of the new node created
 *
 * Return: returns a pointer  to the new node or NULL otherwise.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
