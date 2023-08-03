#include "binary_trees.h"

/**
 * tree_height - calculates the heaight of a given binary tree node
 * @tree: node whose height is to be found
 *
 * Return: returns the height of the node
 */
int tree_height(binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + tree_height(tree->right);
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: node whose balance factor is to be found
 *
 * Return: an integer value either positive or negative denoting balance.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + tree_height(tree->right);
	return (left_height - right_height);
}
