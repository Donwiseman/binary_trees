#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a given node is a leaf
 * @node: binary tree node to be checked if it is a leaf
 *
 * Return: 1 if true otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
