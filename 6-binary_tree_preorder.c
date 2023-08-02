#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in pre_order pattern
 * @tree: root of tree
 * @func: function that would be used for each node as it traverses.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
