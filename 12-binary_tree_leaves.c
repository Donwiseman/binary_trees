#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the number of leaves in the binary tree.
 * @tree: binary tree node to measure from.
 *
 * Return: returns the number of leaves present.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
