#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the given node is the root
 * @node: binary tree node to be checked if it is the root
 *
 * Return: returns 1 if true otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
