#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the binary tree from the given node
 * @tree: binary tree node
 *
 * Return: returns the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_size += binary_tree_size(tree->left);
	if (tree->right != NULL)
		right_size += binary_tree_size(tree->right);
	return (1 + left_size + right_size);
}
