#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the number of nodes with atleast a child.
 * @tree: binary tree node to measure from.
 *
 * Return: returns the number of nodes with atleast a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
		node += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		node += binary_tree_nodes(tree->right);
	return (1 + node);
}
