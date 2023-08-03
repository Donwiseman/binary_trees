#include "binary_trees.h"

/**
 * binary_tree_height - calculates the heaight of a given binary tree node
 * @tree: node whose height is to be found
 *
 * Return: returns the height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	return (left_height > right_height ? left_height : right_height);
}
