#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: node to find it's uncle
 *
 * Return: a pointer to the uncle node or NULL otherwise.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);
	grandparent = parent->parent;
	if (grandparent->left == parent)
		return (grandparent->right);
	if (grandparent->right == parent)
		return (grandparent->left);
	return (NULL);
}
