#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree in post-order pattern
 * @tree: root of tree
 * @func: function that would be used for each node as it traverses.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
