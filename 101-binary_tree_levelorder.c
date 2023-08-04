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
 * print_level - prints the tree by levels using the func provided
 * @tree: node to traverse by level
 * @level: level to traverse
 * @func: function touse at each node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - does a level-order traversal
 * @tree: root node
 * @func: function employes at each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level;

	if (tree == NULL || func == NULL)
		return;
	height = tree_height((binary_tree_t *)tree);
	for (level = 0; level <= height; level++)
		print_level(tree, level, func);
}
