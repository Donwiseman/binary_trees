#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: node to find it's sibling
 *
 * Return: a pointer to the sibling node or NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	if (parent->right == node)
		return (parent->left);
	return (NULL);
}
