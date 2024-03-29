#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a given node
 * @parent: node which new node is to be attached as the left child
 * @value: value of new node
 *
 * Return: returns a pointer to the new node created or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		(new_node->right)->parent = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
