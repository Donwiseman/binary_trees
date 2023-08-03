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
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: node whose balance factor is to be found
 *
 * Return: 1 if it is perfect otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, isperfect;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (!(tree->left != NULL && tree->right != NULL))
		return (0);
	/*check left and right subtree of equal height*/
	left_height = 1 + tree_height(tree->left);
	right_height = 1 + tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	/*check left subtree is perfect*/
	isperfect = binary_tree_is_perfect(tree->left);
	if (isperfect == 0)
		return (0);
	/*check right subtree is perfect*/
	isperfect = binary_tree_is_perfect(tree->right);
	if (isperfect == 0)
		return (0);
	return (1);
}
