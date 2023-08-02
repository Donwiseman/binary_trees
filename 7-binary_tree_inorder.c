#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in in_order pattern
 * @tree: root of tree
 * @func: function that would be used for each node as it traverses.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
