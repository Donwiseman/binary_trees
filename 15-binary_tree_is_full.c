#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary tree node
 *
 * Return: 1 if it is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isfull_left, isfull_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		isfull_left = binary_tree_is_full(tree->left);
		isfull_right = binary_tree_is_full(tree->right);
	}
	else
		return (0);
	if (isfull_left && isfull_right)
		return (1);
	else
		return (0);
}
